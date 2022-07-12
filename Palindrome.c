#include<stdio.h>
void main()
{
    int number, i, reverse = 0;

    printf("Enter the number to check\n");

    scanf("%d",&number);

    i = number;

    while(number != 0)

    {
        reverse = reverse*10 + number%10;

        number = number/10;
    }
    if(i != reverse)
    {
        printf("Not palindrome");
    }
    else if( i = reverse)
    {
        printf("Palindrome");
    }
}