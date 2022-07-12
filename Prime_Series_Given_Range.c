#include<stdio.h>
void main()
{
    int start, end, i, j, isPrime;

    printf("Enter the first limit\n");

    scanf("%d", &start);

    printf("Enter the end limit\n");

    scanf("%d", &end);

    printf("Prime numbers from %d to %d are\n", start, end);

    for(i = 2; i <= end; i++)
    {
        isPrime = 1;

        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
            {
                isPrime = 0;
            }
        }

        if(i >= start && isPrime == 1)
        {
            printf("%d\n",i);
        }
    }
}