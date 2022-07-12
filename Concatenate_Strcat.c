#include<stdio.h>
#include<string.h>
void main()
{
    char name_1[50], name_2[25];
    printf("Enter your name : ");
    gets(name_1);
    printf("Enter your title : ");
    gets(name_2);
    strcat(name_1, name_2);
    puts(name_1);
}