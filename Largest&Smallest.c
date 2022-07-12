#include<stdio.h>
void main()
{
    int a[100];
    int n, i, sum=0;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter %d integer values in the array\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int large = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>a[0])
        {
            large = a[i];
            sum += a[i];
        }
    }
    int small = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]<a[0])
        {
            small = a[i];
        }
    }
    printf("sum = %d\n" ,sum);
    printf("The largest number is %d\nThe smallest number is %d" ,large ,small);
}