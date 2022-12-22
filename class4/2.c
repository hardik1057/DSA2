// WAP to insert a number at the end of the list 
#include <stdio.h>
#include <stdlib.h>
struct linklist
  {
     int no;
     struct linklist *next;
  };
typedef struct linklist node;
void insert(node *lst) 
  {
     node *nw;
     nw=(node *)malloc(sizeof(node));
     printf("Enter no to be inserted ");
     scanf("%d",&nw->no);
     while(lst->next != NULL)
	    lst=lst->next;
    lst->next=nw;
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
    printf("\nElemnts Before insert \n");
    disp(head);
    insert(head);
    printf("\n\nElemnts after insert\n");
    disp(head);
  }