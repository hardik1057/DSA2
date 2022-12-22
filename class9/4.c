#include <stdio.h>
#include <stdlib.h>
struct cqueue
{
    int no;
    struct cqueue *next;
};
typedef struct cqueue node;
void addcque(node **f, node **r, int n)
{
    node *nw;
    if (*f == NULL)
    {
        *f = (node *)malloc(sizeof(node));
        (*f)->no = n;
        (*f)->next = *f;
        *r = *f;
    }
    else
    {
        nw = (node *)malloc(sizeof(node));
        nw->no = n;
        nw->next = *f;
        (*r)->next = nw;
        *r = nw;
    }
}
void disp(node *f)
{
    node *q, *p;
    q = f;
    p = NULL;
    while (q != p)
    {
        printf("%d ", q->no);
        q = q->next;
        p = f;
    }
}
void del_beg(node **f, node **r)
{
    node *nw;
    if (*f == NULL)
        printf("\nCqueue is empty");
    else
    {
        if ((*f)->next == *f)
        {
            nw = *f;
            *f = *r = NULL;
            free(nw);
        }
        else
        {
            nw = *f;
            *f = nw->next;
            (*r)->next = *f;
            free(nw);
        }
    }
}
void del_end(node **f, node **r)
{
    node *nw;
    if (*f == NULL)
        printf("\nCqueue is empty");
    else
    {
        if ((*f)->next!=NULL)
        {
            nw = *f;
            *f = *r = NULL;
            free(nw);
        }
        else
        {
            (*r)->next = *f;
            *f = nw->next;
            nw = *f;        
            free(nw);
        }
    }
}
int main()
{
    node *front, *rear;
    int n, r,x;
    front = rear = NULL;
    printf("How many nos ");
    scanf("%d", &r);
    while (r != 0)
    {
        printf("Enter No ");
        scanf("%d", &n);
        addcque(&front, &rear, n);
        r--;
    }
    printf("press 1 for beginning 2 for end");
    scanf("%d",&x);
    switch (x)
        {
            case 1: del_beg(&front,&rear);
                    disp(front);
            case 2: del_end(&front,&rear);
                    disp(front);
        }
    return 0;
}
