#include<stdio.h>
void main()
{
    int terms, i, a, b, c;
    printf("Enter number of terms\n");
    scanf("%d", &terms);
    a=0;
    b=1;
    c=0;
    printf("Fibonacci Terms:\n");
    for(i=0; i<=terms; i++)
    {
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }
}