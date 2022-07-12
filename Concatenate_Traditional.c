#include<stdio.h>
void main()
{
    int len_1 = 0, len_2 = 0, i;
    char name_1[50], name_2[20];
    printf("Enter your name : ");
    gets(name_1);
    printf("Enter your title : ");
    gets(name_2);
    for(i=0; name_1[i]!='\0'; i++)
    {
        len_1++;
    }
    for(i=0; name_2[i]!='\0'; i++)
    {
        len_2++;
    }
    for(i=0; i<=len_2; i++)
    {
        name_1[len_1+i] = name_2[i];
    }
    puts(name_1);
}