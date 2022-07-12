#include<stdio.h>
void main()
{
    int a[100], n, i, j, temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1; i<n; i++)
    {
        temp = a[i];
        j = i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            a[j] = temp;
            j--;
        }
    }
    printf("Sorted array :\t");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}