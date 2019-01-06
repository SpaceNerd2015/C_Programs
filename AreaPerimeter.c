/* Hayley Andrews
CS 102-01
9-22-16
Area and Perimeter of Triangle, Square, and rectangle */

#include <stdio.h>

int main()
{
	int a,b,c,areat,perimt,areas,perims,arear,perimr;
	
	//Triangle
		//Area
	printf("Enter the value of the base of the triangle.\n");
	scanf("%d", &a);
	printf("Enter the value of the height of the triangle.\n");
	scanf("%d", &b);
	areat=(a*b)/2;
	printf("The value of the area of the triangle is %d.\n", areat);
		//Perimeter
	printf("Enter the three values of the sides of the triangle.\n");
	scanf("%d, %d, %d", &a,&b,&c);
	perimt=a+b+c;
	printf("The perimeter of the triangle is %d.\n\n", perimt);

	//Square
		//Area
	printf("Enter the value of a side of the square.\n");
	scanf("%d", &a);
	areas=a*a;
	printf("The area of the square is %d.\n", areas);
		//Perimeter
	perims=a+a+a+a;
	printf("The perimeter of the square is %d.\n\n", perims);

	//Rectangle
		//Area
	printf("Enter the value of one of the larger sides of the rectangle.\n");
	scanf("%d", &a);
	printf("Enter the value of one of the smaller sides of the rectangle.\n");
	scanf("%d", &b);
	arear=a*b;
	printf("The area of the rectangle is %d.\n", arear);
		//Perimeter
	perimr=(2*a)+(2*b);
	printf("The perimeter of the rectangle is %d.\n\n", perimr);

	system("pause");
}