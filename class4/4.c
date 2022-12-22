// WAP to store some numbers in a link list then delete a number from the beginning of the list
#include <stdio.h>
#include <stdlib.h>
struct linklist
  {
     int no;
     struct linklist *next;
  };
typedef struct linklist node;
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
void disp(node *lst)  
  {
     while(lst != NULL)
      {
        printf("%d   ",lst->no);
        lst=lst->next;
      }
  }
node *delbeg(node *head)
  {
     node *nw;
     nw=head;
     head=nw->next;
     free(nw);
     return(head);
  }
void main()
  {
    node *head;
    head=(node *)malloc(sizeof(node)); 
    create_list(head);
    printf("\nElemnts Before Delete \n");
    disp(head);
    head=delbeg(head);
    printf("\n\nElemnts after Delete\n");
    disp(head);
  }