//WAP to store numbers in DMA then print sum of palindrome numbers.
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *p,inp,length,sum=0;
    printf("Enter length of array- ");
    scanf("%d", &length);
    p=(int*)malloc(length*sizeof(int));
    for(int i=0;i<length;i++)
        {
            printf("Enter number into the array- ");
            scanf("%d",&inp);
            *(p+i)=inp;
        }
    for(int i=0;i<length;i++)
        {
            int org=0,num=*(p+i);
            while(num>0)
                {
                    int rem=num%10;
                    num=num/10;
                    org=(org*10)+rem;
                }
            if(org==*(p+i))
                sum=sum+(*(p+i));
        }
    printf("Sum of palindrome numbers present in the array- %d\n",sum);
    return 0;
}
