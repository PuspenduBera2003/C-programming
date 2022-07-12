#include<stdio.h>
#include<string.h>
void main()
{
    int i, j, k, len_source, len_search, len_replace;
    char source[50], search[25], replace[25];
    printf("Enter the string : ");
    gets(source);
    printf("Enter the keyword to search : ");
    gets(search);
    printf("Enter the keyword to replace : ");
    gets(replace);
    len_source = strlen(source);
    len_search = strlen(search);
    len_replace = strlen(replace);
    if(len_search != len_replace)
    {
        printf("Replacement is not possible");
    }
    else if(len_search == len_replace)
    {
        for(i=0; i<len_source; i++)
        {
            for(j=0; j<len_search; j++)
            {
                if(source[i+j] != search[j])
                {
                    break;
                }
            }
            if(j==len_search)
            {
                for(k=0; k<len_replace; k++)
                {
                    source[i+k] = replace[k];
                }
            }
        }
        printf("After replacement : ");
        puts(source);
    }
}