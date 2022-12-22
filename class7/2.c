// WAP to store some numbers in a stack and prinnt the sum of those numbers whose first and last digit are even and display the sum 
#include <stdlib.h>
#include <stdio.h>
struct stack
   {
      int no;
      struct stack *next;
   };
typedef struct stack node;
void push(node **s,int n)    
   {
      node *nw;
      if(*s==NULL)
         {
            *s=(node *)malloc(sizeof(node));
            (*s)->no=n;
            (*s)->next=NULL;
         }
      else
         {
            nw=(node *)malloc(sizeof(node));
            nw->no=n;
            nw->next=*s;
            *s=nw;
         }
   }
void disp(node *q) 
  {
     while(q != NULL)
      {
         printf("%d  ",q->no);
         q=q->next;
      }
  }
void even(node *lst)
   {
      int sum=0,first,last;
      node *nw=lst;
      while(nw!=NULL)
         {
            first=nw->no,last=(nw->no)%10;
            while(first>=10)
                first=first/10;
            if(first%2==0 && last%2==0)
                sum=sum+nw->no;
            nw=nw->next;
         }
      printf("\nThe sum of numbers whose first and last digit is even are- %d\n", sum);
   }
void main()
   {
      node *top ;
      int r,n;
      top=NULL;
      printf("How many nos- ");         
      scanf("%d",&r);                  
      while(r != 0)
         {
            printf("Enter no- ");
            scanf("%d",&n);
            push(&top,n);
            r--;
         }
      disp(top); 
      even(top);
   }
