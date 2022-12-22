// WAP to delete a particular number from the circular link list
#include <stdio.h>
#include <stdlib.h>
struct linklist
  {
     int no;
     struct linklist *next;
  };
typedef struct linklist node;
void create_list(node *head)
  {
    int r;
    node *nw,*lst;
    printf("How many nos- ");
    scanf("%d",&r);
    lst=head;
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
     lst->next=head;
  }
void disp(node *head)
  {
    node *p,*q;
    p=NULL;
    q=head;
    while(p != q)  //p=n q=1001
      {
        printf("%d ",q->no);
        q=q->next;
        p=head;
      }
  }
node *del_key(node *head)
  {
     node *lst,*nw;
     int key,f;
     printf("\nEnter no to be delted- ");
     scanf("%d",&key);
     f=0;
     if(head->no==key)
        {
          f=1;
          if(head->next==head)
            {
                nw=head;
                free(nw);
                head=NULL;
            }
          else
            {  
                nw=head;
                  lst=head;
                while(lst->next != head)
                    lst=lst->next;
                head=nw->next;
                lst->next=head;
                free(nw);
            }
        }
     else
        {
            lst=head;
            while(lst->next !=head)
              {
                  if(lst->next->no==key)
                  {
                    nw=lst->next;
                    lst->next=nw->next;
                    free(nw);
                    f=1;
                    break;
                  }
                lst=lst->next;
              }
        }
    if(f==0)
	    printf("\nKey not found !!!");
  return(head);
  }
void main()
{
    node *head;
    head=(node *)malloc(sizeof(node)); 
    create_list(head);
    printf("Elements before deletion- ");
    disp(head);
    head=del_key(head);
    printf("Elements after deletion- ");
    disp(head);
}