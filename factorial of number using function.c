//9. Write a C program to find factorial of number using function
#include<stdio.h>
void main()
{
	int n,f;
	printf("Enter any number:");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial of %d is %d",n,f);
}
int fact(int n)
{
	int i=1,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
/* OUTPUT
Enter any number:5
Factorial of 5 is 120
*/
