#include<stdio.h>
void main()
{
    int i;
    char str_1[25], str_2[25];
    printf("Enter first string : ");
    gets(str_1);
    printf("Enter second string : ");
    gets(str_2);
    for(i=0; str_1[i]!='\0' || str_2[i]!='\0'; i++)
    {
        if(str_1[i]!=str_2[i])
        {
            printf("%s and %s are not same", str_1, str_2);
            break;
        }
        else
        {
            printf("%s and %s are same", str_1, str_2);
            break;
        }
    }
}