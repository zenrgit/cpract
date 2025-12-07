/*5. Write a Program to display the given Fibonacci series (using for loop)
 0, 1, 1, 2, 3, 5…… n
*/
#include<stdio.h>
void main()
{
	int n,i,a=0,b=1,c;
	printf("Enter the no. of terms:");
	scanf("%d",&n);
	printf("%d, %d",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(", %d",c);
	}
}
/*
Enter the no. of terms:10
0, 1, 1, 2, 3, 5, 8, 13, 21, 34
*/
