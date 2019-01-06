/* Hayley Andrews
CS 102-01
10-10-16
Programming Assignment 3: Switch Statement, If-Else Statement, and Operations*/

#include <stdio.h>

int main()
{
	int choice, num, count, num1;
	printf("Enter '1' to check to see if a number is odd or even.\n");
	printf("Enter '2' to check to see if a number is negative or positive.\n");
	printf("Enter '3' to find the factorial of a number.\n");
	scanf_s("%d", &choice);
	switch(choice)
	{
	case 1:	printf("Enter a number.\n");
				scanf_s("%d", &num);
				if(num%2!=0)
				{
					printf("The number is odd.\n");
				}
				else if(num%2==0)
				{
					printf("The number is even.\n");
				}
				else if(num==0)
				{
					printf("The number is even.\n");
				}
		break;
	case 2:	printf("Enter a number.\n");
				scanf_s("%d", &num);
				if(num<0)
				{
					printf("The number is negative.\n");
				}
				else if(num>0)
				{
					printf("The number is positive.\n");
				}
				else if(num==0)
				{
					printf("The number is neither negative nor positive.\n");
				}
		break;
	case 3:	printf("Enter a number.\n");
				scanf_s("%d", &num1);
				count=1;
				num = 1;
				do
				{
					num=num*count;
					count=count+1;
				} while (count <=num1);
				printf("The factorial is %d.\n", num);
		break;
	default: printf("Invalid choice.\n");
		break;
	}
	system("pause");
}