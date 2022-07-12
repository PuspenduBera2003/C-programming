#include<stdio.h>
void main()
{
    int number, i, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &number);
    for(i=1; i <= number/2; i++)
    {
        if(number%i == 0)
        {
            sum += i;
        }
    }
    if(sum <= number)
    {
        printf("%d is a perfect number", number);
    }
    else
    {
        printf("%d is not a perfect number", number);
    }
}