#include<stdio.h>
#include<string.h>
void main()
{
    int i, len_str;
    char str[50], temp;
    printf("Enter the string : ");
    gets(str);
    len_str = strlen(str);
    for(i=0; i<=len_str/2; i++)
    {
        temp = str[i];
        str[i] = str[len_str-i-1];
        str[len_str-i-1] = temp;
    }
    puts(str);
}