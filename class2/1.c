// WAP to store some characters in DMA and display them
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char *p, c;
    int k, r, i;
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
            *(p+i)=c;
        }
    for (i=0;i<k;i++)
        {
            printf("%c ", *(p+i));
        }
    return 0;
}
