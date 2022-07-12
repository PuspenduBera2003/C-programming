#include<stdio.h>
void main()
{
    int number;
    int sum = 0;
    printf("Enter the number to calculate the sum of the digits\n");
    scanf("%d",&number);
    while(number != 0)
    {
        sum = sum + number%10;
        number = number/10;
    }
    printf("Sum of the digits of the number is %d",sum);
}