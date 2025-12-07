/*7. Write a program to enter any number and check whether the number is Armstrong number or not.
(Use while Loop)*/
#include<stdio.h>
void main()
{
	int n,t,sum=0,r;
	printf("Enter any number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(t==sum)
	printf("Number is an Armstrong Number");
	else
	printf("Number is not an Armstrong Number");
}
/*
Enter any number:153
Number is an Armstrong Number
*/
