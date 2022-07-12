#include<stdio.h>
void main()
{
    int a[25];
    int n, min, i, temp, j;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
            if(min!=i)
            {
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }
    }
    printf("Sorted array :\t");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}