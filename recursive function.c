//11. Write a recursive function for calculating factorial of a N number.
#include<stdio.h>
int recur(int n);
void main()
{
	int n,fact;
	printf("Enter any number:");
	scanf("%d",&n);
	
	fact=recur(n);
	printf("Factorial of %d is %d",n,fact);
}
int recur(int n)
{
	if(n==1)
	return(1);
	else
	return(n*recur(n-1));
}
/* OUTPUT
Enter any number:5
Factorial of 5 is 120
*/
