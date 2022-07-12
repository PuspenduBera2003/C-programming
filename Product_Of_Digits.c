#include<stdio.h>
void main()
{
    int number;
    int product = 1;
    printf("Enter the number to calculate product of digits\n");
    scanf("%d",&number);

    while(number != 0)
    {
        product *= number%10;
        number = number/10;
    }
    printf("Product of the digits of the number is %d",product);
}