#include<stdio.h>
void main()
{
    int num1, num2, min, i, hcf = 1;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    min = num1;
    if(num1>num2)
    {
        min = num2;
    }
    for(i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }
    printf("HCF of %d and %d = %d", num1, num2, hcf);
}