// WAP to store some characters in DMA and count the number of vowels present in them
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char *p, c;
    int k, r, i, count;
    printf("How many characters- ");
    scanf("%d",&k);
    p=(char*)malloc(k*sizeof(char)); // yaha pe size of isliye use nai kiya kyuki char ka size 1 bit hota hai
    for (i=0;i<k;i++)
        {
            fflush(stdin);
            //while (getchar() !='\n');
            printf("Enter Char-");
            scanf("%c",&c);
            //c = getch();
            //c = getche();
            //c = getchar();
            *(p+i)=c;
        }
    for (i=0;i<k;i++)
        {
          if(*(p+i)== 'a')
          count++;
          if(*(p+i)== 'e')
          count++;
          if(*(p+i)== 'i')
          count++;
          if(*(p+i)== 'o')
          count++;
          if(*(p+i)== 'u')
          count++;
          if(*(p+i)== 'A')
          count++;
          if(*(p+i)== 'E')
          count++;
          if(*(p+i)== 'I')
          count++;
          if(*(p+i)== 'O')
          count++;
          if(*(p+i)== 'U')
          count++;
        }
    printf("Number of vowles is- %d ",count);
    return 0;
}
