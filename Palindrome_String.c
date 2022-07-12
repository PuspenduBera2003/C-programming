#include<stdio.h>
#include<string.h>
void main()
{
    int i, len_str;
    char str[50], copy[50], temp;
    printf("Enter the string : ");
    gets(str);
    len_str = strlen(str);
    for(i=0; i<= len_str + 1; i++)
    {
        copy[i] = str[i];
    }
    for(i=0; i<=len_str/2; i++)
    {
        temp = str[i];
        str[i] = str[len_str-i-1];
        str[len_str-i-1] = temp;
    }
    for(i=0; i<= len_str; i++)
    {
        if(str[i]!=copy[i])
        {
            printf("%s is not a palindrome string",copy);
            break;
        }
        else
        {
            printf("%s is a palindrome string",copy);
            break;
        }
    }
}