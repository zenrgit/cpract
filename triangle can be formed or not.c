/*2. C program to find whether a triangle can be formed or not. If not display “This Triangle is NOT possible”.
If the triangle can be formed then check whether the triangle formed is equilateral, isosceles and
scalene*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(c+a>b))
	{
		printf("It forms a traingle\n");
		if((a==b)&&(b==c)&&(c==a))
		printf("Triangle is an equilateral");
		else
	     if((a==b)||(b==c)||(c==a))
	     printf("Triangle is isosceles");
	     else
	     printf("Triangle is scalene");
	}
}
/* OUTPUT
Enter sides of triangle:4 5 6
It forms a traingle
Triangle is scalene
*/
