#include<stdio.h>
void main()
{
    int i,number;
    int sum=0;
    printf("Enter any number\n");
    scanf("%d",&number);
    for(i=1; i<=number; i=i+2)
    sum=i+sum;
    printf("Sum of all odd numbers from 1 to %d is %d",number,sum);
}