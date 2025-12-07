//1. C program to find the Largest Number Among Three Numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter any 3 Numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is largest",a);
		else
		printf("%d is largest",c);
	}
	else
	{
		if(b>c)
		printf("%d is largest",b);
		else
		printf("%d is largest",c);
	}
}
/* OUTPUT
Enter any 3 Numbers:16 67 53
67 is largest
*/
