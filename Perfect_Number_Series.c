#include<stdio.h>
void main()
{
    int num1, num2, i, j, sum;
    printf("Enter the first limit\n");
    scanf("%d", &num1);
    printf("Enter the last digit\n");
    scanf("%d", &num2);
    printf("All perfect numbers from %d to %d are :\n",num1,num2);
    for(i=num1; i<=num2; i++)
    {
        sum=0;
        for(j=num1; j<=i/2; j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum<=i)
        {
            printf("%d\n",i);
        }
    }
}