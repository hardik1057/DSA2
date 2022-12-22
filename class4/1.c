// wap to insert a number at the beginning of the link list
#include <stdio.h>
#include <stdlib.h>
struct linklist
  {
     int no;
     struct linklist *next;
  };
typedef struct linklist node;
struct linklist * insert(node *lst) 
  {
    node *nw = (node *)malloc(sizeof(node));
    printf("\nEnter no to be inserted- ");
    scanf("%d",&nw->no);
    nw->next=lst;
    return nw;
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
    printf("\nElements Before insert-");
    disp(head);
    head=insert(head);
    printf("\nElements after insert-");
    disp(head);
  }