// wap to print sum of numbers whose first digit is prime from a queue
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
void prime(node *q)
{
    int sum = 0;
    while (q != NULL)
    {
        int temp = q->no, cnt = 0;
        while (temp >= 10)
        {
            temp /= 10;
        }
        for (int i = 2; i <= temp / 2; i++)
        {
            if (temp % i == 0)
            {
                cnt++;
                break;
            }
        }
        if (cnt == 0 && q->no != 1)
        {
            sum = sum + q->no;
        }
        q = q->next;
    }
    printf("\nSum of numbers whose first digit is prime is- %d", sum);
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
    prime(front);
}