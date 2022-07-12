#include<stdio.h>
void main()
{
    int a[100], b[100], ab[100];
    int n, i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter %d elements in a array\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter %d elements in b array\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<n; i++)
    {
        ab[i] = a[i] + b[i];
    }
    printf("The %d elements in ab array is :\n",n);
    for(i=0; i<n; i++)
    {
        printf("%d\n",ab[i]);
    }
}