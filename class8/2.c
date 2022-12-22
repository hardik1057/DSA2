// wap to search for a number in queue
#include <stdlib.h>
#include <stdio.h>
struct queue
{
    int no;
    struct queue *next;
};
typedef struct queue node;
void addque(node **f, node **r, int n)
{
    node *nw;
    if (*f == NULL)
    {
        *f = (node *)malloc(sizeof(node));
        (*f)->no = n;
        (*f)->next = NULL;
        *r = *f;
    }
    else
    {
        nw = (node *)malloc(sizeof(node));
        nw->no = n;
        nw->next = NULL;
        (*r)->next = nw;
        *r = nw;
    }
}
void disp(node *q)
{
    while (q != NULL)
    {
        printf("%d  ", q->no);
        q = q->next;
    }
}
void search(node *lst) 
{
    int sn, f;
    printf("\nEnter no to be searched- ");
    scanf("%d", &sn);
    f = 0;
    while (lst != NULL)
    {
        if (lst->no == sn)
        {
            f = 1;
            printf("Found %d \n", lst->no);
            break;
        }
        lst = lst->next;
    }
    if (f == 0)
        printf("Not Found \n");
}
void main()
{
    node *front, *rear;
    int r, n;
    printf("How many nos- ");
    scanf("%d", &r);
    front = rear = NULL;
    while (r != 0)
    {
        printf("Enter no- ");
        scanf("%d", &n);
        addque(&front, &rear, n);
        r--;
    }
    disp(front);
    search(front);
}