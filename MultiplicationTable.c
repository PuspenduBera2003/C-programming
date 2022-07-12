#include<stdio.h>
void main()
{
    int i,number;
    printf("Enter any number\n");
    scanf("%d",&number);
    for(i=1; i<=10; i++)
    printf("%d * %d = %d\n",number,i,number*i);
}