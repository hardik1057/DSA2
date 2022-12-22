// wap to count the number of palindrome numbers stored in a queue
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
void palindrome(node *q)
{
    int cnt=0;
    while (q!=NULL)
        {
            int num, rev = 0, rem, org;
            org = num=q->no;
            while (num != 0)
            {
                rem = num % 10;
                rev = rev * 10 + rem;
                num /= 10;
            }
            if (org == rev)
                {
                    cnt++;
                }
            q=q->next;
        }
    printf("Nuumber of palindrome numbers in queue are- %d", cnt);
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
    palindrome(front);
}