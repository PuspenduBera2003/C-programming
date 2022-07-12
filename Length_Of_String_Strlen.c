#include<stdio.h>
#include<string.h>
void main()
{
    int count;
    char name[50];
    printf("Enter your name : ");
    gets(name);
    count = strlen(name);
    printf("There are %d characters in your name",count);
}