#include<stdio.h>
#include<math.h>
void main()
{
    int number, i;

    long long power;

    printf("Enter the number\n");

    scanf("%d", &number);

    i=1;

    while(i <= 10)
    {
        power = pow(number, i);

        printf("%d^%d = %lld\n", number, i, power);

        i++;
    }
}