// WAP to delete last number in a linked list
#include <stdio.h>
#include <stdlib.h>
struct linklist
  {
     int no;
     struct linklist *next;
  };
typedef struct linklist node;
void dellast(node *lst) 
  {
     struct linklist *nw;
     while(lst->next != NULL)
     {
         nw=lst;
	     lst=lst->next;
     }
     nw->next=NULL;
     free(lst);
  }
void disp(node *lst)   
  {
     while(lst != NULL)
       {
	        printf("%d  ",lst->no);
	        lst=lst->next;
       }
  }
void create_list(node *lst)   
  {
      int r;
      printf("How many nos ");  
      scanf("%d",&r);          
      while(r != 0)              
	 {                       
	    printf("Enter no ");  
	    scanf("%d",&lst->no);
	    r--;
	    if(r==0)
	       break;
	    lst->next=(node *)malloc(sizeof(node));
	    lst=lst->next;
	 }
	 lst->next=NULL;
  }
void main()
  {
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    dellast(head);
    printf("\nElemnts after delete- ");
   disp(head);
}