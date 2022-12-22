// WAP to insert at a key position of circular link list
//3 
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
node *insert_key(node *head)
    {
     int x,key;
     node *lst,*nw;
     printf("\nEnter key no- ");
     scanf("%d",&key);
     printf("Enter no to be inserted- ");
     scanf("%d",&x);
     if(head->no==key)
        {
            nw=(node*)malloc(sizeof(node));
            nw->no=x;
            nw->next=head;
            lst=head;
            while(lst->next!=head)
                lst=lst->next;
            lst->next=nw;
            head=nw;
        }
    else
        {  
            lst=head;
            while(lst->next != head)
                {
                    if (lst->next->no==key)
                        {
                            nw=(node*)malloc(sizeof(node));
                            nw->no=x;
                            nw->next=lst->next;
                            lst->next=nw;
                            break;
                        }
                    lst=lst->next;
                }
        return (head);
        }
    }
void main()
{
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("Elements before inserting- ");
    disp(head);
    head=insert_key(head);
    printf("Elements after inserting- ");
    disp(head);
}
