// WAP to store numberss in a linkd list then print sun of all the elements of numbers which are prime
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
void prime(node *lst)
    {
      int sum=0,cnt;
      while (lst!=NULL)
        {
          cnt=0;
          for(int i=1; i<=lst->no;i++)
            {
              if(lst->no%i==0)
                {
                  cnt++;
                }  
            }
          if(cnt==2)
            {
              printf("\n%d is prime\n", lst->no);
              sum=sum+lst->no;
            } 
          lst=lst->next;
          }
      printf("Sum of numbers which are prime is- %d", sum);
    }
int main ()
  {
    node *head;
    head =(node*)malloc(sizeof(node));
    create_list(head);
    disp(head);
    prime(head);
  }