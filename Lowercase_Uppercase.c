#include<stdio.h>
void main()
{
    int i;
    char str[50];
    printf("Enter the string : ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    puts(str);
}