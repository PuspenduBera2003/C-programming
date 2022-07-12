#include<stdio.h>
void main()
{
    int decimal, binary=0, copy, place=1;
    printf("Enter the number in decimal\n");
    scanf("%d", &decimal);
    copy=decimal;
    while(copy>0)
    {
        binary=binary+(copy%2)*place;
        copy=copy/2;
        place*=10;
    }
    printf("Decimal number : %d\nBinary number : %d", decimal, binary);
}