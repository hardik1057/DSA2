//WAP to store numbers in DMA. then print the sum of all those numbers which are prime.
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *p, j, i, num, inp, c, sum;
    printf("How many numbers- ");
    scanf("%d", &num);
    p=(int*)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
        {
            printf("Enter number- ");
            scanf("%d",&inp);
            *(p+i)=inp;
        }
    for(i=0;i<num;i++)
        {
            c=0;
            for(j=1;j<=*(p+i);j++)
            {
                if(*(p+i)%j==0)
                    c++;
            }
            if(c==2)
                {
                printf("%d is prime\n",*(p+i));
                sum=sum+*(p+i);
                }
            else
                printf("%d is not prime\n",*(p+i));
    }
    printf("Sum of prime numbers are- %d", sum);
    return 0;
}
