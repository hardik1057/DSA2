//wap to store numbers in a circular queue and display them.
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
int main()
{
    node *front, *rear;
    int n, r;
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
    disp(front);
    return 0;
}