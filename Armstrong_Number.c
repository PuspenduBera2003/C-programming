#include<stdio.h>
#include<math.h>
void main()
{
    int num, digit, copy, cal, arm=0;
    printf("Enter the number\n");
    scanf("%d", &num);
    copy = num;
    digit = log10(num)+1;
    while(num>0)
    {
        cal = pow(num%10, digit);
        arm +=cal;
        num = num/10;
    }
    if(copy==arm)
    {
        printf("%d is an armstrong number",copy);
    }
    else
    {
        printf("%d is not an armstrong number",copy);
    }
}