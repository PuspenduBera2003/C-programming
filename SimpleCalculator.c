#include<stdio.h>
void main()
{
    float num1,num2,result;
    char operator;
    printf("The format is [number 1] [+-*/] [number 1] = [result]\n");
    printf("Enter the numbers and character respectively\n");
    scanf("%f %c %f",&num1, &operator, &num2);
    switch(operator)
    {
        case '+':
        result=num1+num2;
        printf("%.2f %c %.2f = %.2f",num1,operator,num2,result);
        break;
        case '-':
        result=num1-num2;
        printf("%.2f %c %.2f = %.2f",num1,operator,num2,result);
        break;
        case '*':
        result=num1*num2;
        printf("%.2f %c %.2f = %.2f",num1,operator,num2,result);
        break;
        case '/':
        result=num1/num2;
        printf("%.2f %c %.2f = %.2f",num1,operator,num2,result);
        break;
        default:
        printf("Wrong Operator!!!");
        break;
    }
}