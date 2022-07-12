#include<stdio.h>
void main()
{
    int num, copy, i, mul, sum, digit;
    printf("Enter any number to check whether it is a strong number or not\n");
    scanf("%d", &num);
    copy = num;
    sum=0;
    while(num>0)
    {
        digit = num%10;
        mul=1;
        for(i=1; i<=digit; i++)
        {
            mul*=i;
        }
        sum+=mul;
        num = num/10;
    }
    if(sum==copy)
    {
        printf("%d is a strong number",copy);
    }
    else
    {
        printf("%d is not a strong number",copy);
    }
}