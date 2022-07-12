#include<stdio.h>
void main()
{
    int decimal, rem, copy, octal=0, place=1;
    printf("Enter the number in decimal :\n");
    scanf("%d", &decimal);
    copy = decimal;
    while(copy>0)
    {
        rem = copy%8;
        octal += (rem*place);
        place *= 10;
        copy /= 8;
    }
    printf("Decimal number : %d\nOctal number: %d",decimal, octal);
}