#include<stdio.h>
void main()
{
    int i,number;
    printf("Enter any number\n");
    scanf("%d",&number);
    printf("Natural Numbers from 1 to %d are\t",number);
    for(i=1; i<=number; i++)
    printf("%d\t",i);
}