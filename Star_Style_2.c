#include<stdio.h>
void main()
{
    int i, j, space, rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(space=rows-1; space>=i; space--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}