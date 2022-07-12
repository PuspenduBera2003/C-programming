#include<stdio.h>
void main()
{
    int num1, num2, max, i, lcm;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    max = num1;
    if(num1<num2)
    {
        max = num2;
    }
    i = max;
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;
        }
        i += max;
    }
    printf("LCM of %d and %d = %d", num1, num2, lcm);
}