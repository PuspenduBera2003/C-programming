#include<stdio.h>
void main()
{
    int octal, decimal=0, copy, rem, place=1;
    printf("Enter the number in octal :\n");
    scanf("%d", &octal);
    copy = octal;
    while(copy>0)
    {
        rem = copy%10;
        decimal += rem*place;
        place *= 8;
        copy /= 10;
    }
    printf("Octal number: %d\nDecimal number : %d",octal ,decimal);
}