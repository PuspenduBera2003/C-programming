#include<stdio.h>
void main()
{
    int p[100], sum=0;
    int i, n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter %d integers in the array\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    for(i=0; i<n; i++)
    {
        sum += p[i];
    }
    printf("Sum = %d", sum);
}