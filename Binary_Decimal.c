#include<stdio.h>
void main()
{
    int binary, decimal=0, copy, digit, place=1;
    printf("Enter the number in binary\n");
    scanf("%d", &binary);
    copy=binary;
    while(copy>0)
    {
        digit=copy%10;
        decimal+=digit*place;
        place=place*2;
        copy/=10;
    }
    printf("Binary number : %d\nDecimal number : %d", binary, decimal);
}