#include<stdio.h>
void main()
{
    int a[25], n, i, data, mid, l, r;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter an sorted array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the data to found : ");
    scanf("%d", &data);
    l = 0;
    r = n-1;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(a[mid]==data)
        {
            printf("%d found at %d",data,mid);
            break;
        }
        else if(a[mid]<data)
        {
            l = mid + 1;
        }
        else if(a[mid]>data)
        {
            r = mid - 1;
        }
    }
    if(a[mid]!=data)
    {
        printf("%d is not found",data);
    }
}