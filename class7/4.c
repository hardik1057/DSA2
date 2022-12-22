// WAP to delete the last input of the stack
#include <stdlib.h>
#include <stdio.h>
struct stack
{
   int no;
   struct stack *next;
};
typedef struct stack node;
void push(node **s, int n)
{
   node *nw;
   if (*s == NULL)
   {
      *s = (node *)malloc(sizeof(node));
      (*s)->no = n;
      (*s)->next = NULL;
   }
   else
   {
      nw = (node *)malloc(sizeof(node));
      nw->no = n;
      nw->next = *s;
      *s = nw;
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
void pop(node **s)
{
   node *nw;
   if (*s == NULL)
      printf("\nStack is Empty ");
   else
   {
      nw = *s;
      *s = nw->next;
      free(nw);
   }
}
void main()
{
   node *top;
   int r, n;
   top = NULL;
   printf("How many nos- ");
   scanf("%d", &r);
   while (r != 0)
   {
      printf("Enter no-");
      scanf("%d", &n);
      push(&top, n);
      r--;
   }
   printf("Elements  before deletion- ");
   disp(top);
   pop(&top);
   printf("\nElements after deletion- ");
   disp(top);
}
