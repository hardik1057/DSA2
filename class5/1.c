// WAP to delete a number form a key position in link list
#include <stdio.h>
#include <stdlib.h>
struct linklist
  {
     int no;
     struct linklist *next;
  };
typedef struct linklist node;
node *delkey(node *ptr) 
  {
     node *nw=ptr,*lst;
     int key, f;
     printf("\nEnter no to be deleted- ");
     scanf("%d",&key);
     f=0;
     if (ptr->no==key)
        {
            return (ptr->next);
        }
    else 
        {
            lst=ptr;
            while(lst!=NULL)
                {
                    if (lst->next->no==key)
                        {
                            f=1;
                            lst->next=lst->next->next;
                            break;
                        }
                    lst=lst->next;
                }
            if (f==0)
                {
                    printf("Number not found!");
                    return (ptr);
                }
            else
                return nw;
        }
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
      printf("How many nos- ");  
      scanf("%d",&r);          
      while(r != 0)              
	 {                       
	    printf("Enter no- ");  
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
    printf("Elements before delete- ");
    disp(head);
    head=delkey(head);
    printf("Elements after delete- ");
 disp(head);
}
