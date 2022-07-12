#include<stdio.h>
void main()
{
	char name_1[100], name_2[100];
	printf("Enter your name : ");
	gets(name_1);
	printf("Enter your father name : ");
	gets(name_2);
	printf("My name is %s\n", name_1);
	printf("My father name is %s", name_2);
}