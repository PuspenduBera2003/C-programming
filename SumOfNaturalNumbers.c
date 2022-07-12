#include<stdio.h>
void main()
{
    int i,number;
    int sum=0;
    printf("Enter any number\n");
    scanf("%d",&number);
    for(i=1; i<=number; i++)
    sum=sum+i;
    printf("Sum of all natural numbers from 1 to %d is %d",number,sum);
}