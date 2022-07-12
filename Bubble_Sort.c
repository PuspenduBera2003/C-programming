#include<stdio.h>
void main()
{
    int a[25];
    int n, i, j, k, l, temp;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements in the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(k=0; k<n-i-1; k++)
        {
            if(a[k]>a[k+1])
            {
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    printf("Sorted Array : \n");
    for(l=0; l<n; l++)
    {
        printf("%d\t",a[l]);
    }
}