#include<stdio.h>
#include<string.h>
void main()
{
    int i, j, source_len, search_len;
    char source[50], search[25];
    printf("Enter source string : ");
    gets(source);
    printf("Enter search string : ");
    gets(search);
    source_len = strlen(source);
    search_len = strlen(search);
    for(i=0; i<source_len; i++)
    {
        for(j=0; j<search_len; j++)
        {
            if(source[i+j] != search[j])
            {
                break;
            }
        }
        if(j == search_len)
        {
            printf("Search Sub-string found at index %d\n", i);
        }
        else if(i > source_len - search_len)
        {
            printf("Search Sub-string not found!");
            break;
        }
    }
}