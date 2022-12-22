// WAP to store some numbers in a stack and search for a number 
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
void search(node *lst) 
  {
     int sn,f;
     printf("\nEnter no to be searched- ");
     scanf("%d",&sn);
     f=0;
     while(lst != NULL)
       {
        if(lst->no==sn)
          {
            f=1;
            printf("Found %d \n",lst->no);
            break;
          }
        lst=lst->next;
       }
     if(f==0)
       printf("Not Found \n");
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
      search(top);
   }