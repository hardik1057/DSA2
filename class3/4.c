// WAP to store numberss in a linkd list then print sun of all the elements of numbers which are armstrong
#include<stdio.h>
#include<stdlib.h>
struct linklist
  {
    int no;
    struct linklist *next;
  };
typedef struct linklist node;
void create_list(node *lst)
  {
    int r;
    printf("How many numbers- ");
    scanf("%d", &r);
    while(r!=0)
      {
        printf("Enter number-");
        scanf("%d", &lst->no);
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
void arm(node *lst)
    {
        int sum=0;
        while (lst!=NULL)
            {
                int n=lst->no,cubesum=0;
                while(n>0)
                {
                    int d=n%10;
                    n=n/10;
                    cubesum=cubesum+(d*d*d);
                }
                if(cubesum==lst->no)
                    {
                        printf("\n%d is an armstrong number ", lst->no);
                        sum=sum+lst->no;
                    } 
                lst=lst->next;
            }
        printf("\nSum of armstrong numbers is- %d\n", sum);
    }
int main ()
  {
    node *head;
    head =(node*)malloc(sizeof(node));
    create_list(head);
    disp(head);
    arm(head);
  }
