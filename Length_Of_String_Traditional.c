#include<stdio.h>
void main()
{
    int i, count = 0;
    char name[50];
    printf("Enter your name : ");
    gets(name);
    i = 0;
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("There are %d characters in your name",count);
}