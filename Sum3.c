#include<stdio.h>
void main()
{
    int a[50];
    int n, i, even_sum = 0, odd_sum = 0;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    printf("Enter %d values in the array\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even_sum += a[i];
        }
        else
        {
            odd_sum += a[i];
        }
    }
    printf("Even sum = %d\nOdd sum = %d" ,even_sum ,odd_sum);
}