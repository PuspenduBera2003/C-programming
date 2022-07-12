#include<stdio.h>
void main()
{
    int m, n, p, q, i, j, k, sum;
    int a[5][5], b[5][5], c[5][5];
    printf("Enter the number of columns of first matrix : ");
    scanf("%d", &m);
    printf("Enter the number of rows of first matrix : ");
    scanf("%d", &n);
    printf("Enter the number of columns of second matrix : ");
    scanf("%d", &p);
    printf("Enter the number of rows of second matrix : ");
    scanf("%d", &q);
    if(n==p)
    {
        printf("Enter the first matrix :\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the second matrix :\n");
        for(i=0; i<p; i++)
        {
            for(j=0; j<q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                sum = 0;
                for(k=0; k<m; k++)
                {
                    sum += a[i][k]*b[k][j];
                    c[i][j] = sum;
                }
            }
        }
        printf("Resultant Matrix after multiplication\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else if(n != p)
    {
        printf("Multiplication of these matrix is not possible");
    }
}