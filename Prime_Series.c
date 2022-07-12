#include<stdio.h>
void main()
{
    int number, i, j, isPrime;

    printf("Enter the number\n");

    scanf("%d", &number);

    printf("All prime numbers between 1 to %d are:\n",number);

    for(i = 2; i <= number; i++)
    {
        isPrime=1;

        for(j=2; j <= i/2; j++)
        {
            if(i%j==0)
            {
                isPrime=0;
            }
        }
        if(isPrime==1)
        {
            printf("%d\n",i);
        }
    }
}