//WAP to search for a number in a link list
#include <stdio.h>
#include <stdlib.h>
struct linklist
  {
     int no;
     struct linklist *next;
  };
typedef struct linklist node;
void create_list(node *lst)   //lst=1001
  {
    int r;
    printf("How many nos- ");   //     lst    r
    scanf("%d",&r);            //    1001    3
    while(r != 0)              //    1002    2
     {                       //    1003    1
        printf("Enter no- ");  //           0
        scanf("%d",&lst->no);
        r--;
        if(r==0)
          break;
        lst->next=(node *)malloc(sizeof(node));
        lst=lst->next;
      }
	  lst->next=NULL;
  }
void disp(node *lst)   //lst=1001 ,1002, 1003, NULL
  {
     while(lst != NULL)
       {
	        printf("%d   ",lst->no);
	        lst=lst->next;
       }
  }
void search(node *lst) //lst=1001
  {
     int sn,f;
     printf("Enter no to be searched- ");
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
int main()
  {
      node *head;
      head=(node *)malloc(sizeof(node));  //head=1001
      create_list(head);
      disp(head);
      printf("\n");
      search(head);
  }
