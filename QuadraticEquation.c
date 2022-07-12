#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    float root1,root2,root;
    float imaginary,discriminant;
    printf("Structure of the Quadratic Equation is ax^2+bx+c=0\n");
    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    printf("Enter the value of c\n");
    scanf("%f",&c);
    discriminant=(b*b)-(4*a*c);
    switch(discriminant>0)
    {
        case 1:
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Two distinct real roots exists: %.2f and %.2f",&root1,&root2);
        break;
        case 0:
        switch(discriminant<0)
        {
            case 1:
            root=-b/(2*a);
            imaginary=sqrt(-discriminant)/(2*a);
            printf("Two distinct imaginary roots exists: %.2f+%.2fi and %.2f-%.2fi",root,imaginary,root,imaginary);
            break;
            case 0:
            root=-b/(2*a);
            printf("Two equal real roots exists: %.2f and %.2f",root,root);
        }
    }
}