#include<stdio.h>
void main()
{
    int num1, num2, i, j, copy, digit, mul, sum;
    printf("Enter lower limit\n");
    scanf("%d", &num1);
    printf("Enter upper limit\n");
    scanf("%d", &num2);
    printf("All the strong number from %d to %d are:\n", num1, num2);
    for(i=num1; i<=num2; i++)
    {
        copy=i;
        sum=0;
        while(copy>0)
        {
            mul=1;
            digit=copy%10;
            for(j=1; j<=digit; j++)
            {
                mul*=j;
            }
            sum+=mul;
            copy=copy/10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
}