#include<stdio.h>
void main()
{
    int a[5] = {5,10,30,32,12};
    int value, i;
    printf("Enter the value to found : ");
    scanf("%d", &value);
    for(i=0; i<5; i++)
    {
        if(a[i] == value)
        {
            printf("%d found at %d", value, i);
            break;
        }
    }
    if(i == 5)
    {
        printf("Not found!!!");
    }
}