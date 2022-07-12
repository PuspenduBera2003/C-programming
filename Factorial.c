#include<stdio.h>
void main()
{
    int number, i;

    long long factorial = 1;

    printf("Enter the number\n");

    scanf("%d", &number);

    for(i=1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("%d! = %lld", number, factorial);
}