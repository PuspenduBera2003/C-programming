#include<stdio.h>
#include<math.h>
void main()
{
    int number,digit,i;
    printf("Enter any number\n");
    scanf("%d",&number);
    digit=log10(number)+1;
    printf("Total digit in %d is %d\n",number,digit);
    i=number;
    while(i>=10)
    {
        i=i/10;
    }
    printf("First digit of the number is %d\n",i);
    printf("Last digit of the number is %d\n",number%10);
    printf("Sum of 1st digit and last digit is %d",i+number%10);
}