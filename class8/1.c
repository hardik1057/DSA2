// wap to store some numbers in queue and display them
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
}