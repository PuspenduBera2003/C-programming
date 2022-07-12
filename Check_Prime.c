#include<stdio.h>
void main()
{
    int number, i, divPrime=0;

    printf("Enter the number\n");

    scanf("%d", &number);

    for(i = 2; i <= number; i++)

        {
            if(number%i == 0)
            {
                divPrime += 1;
             }
        }
    if(number == 1 || number == 0)
    {
        printf("Neither prime nor composite");
    }
    else if(divPrime < 2 && number > 1)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Composite Number");
    }
}