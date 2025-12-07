//8. Write a program to read any number from the user and find the reverse of given number using while Loop
#include<stdio.h>
void main()
{
	int n,t=0,r;
	printf("Enter any number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		t=(t*10)+r;
		n=n/10;
	}
    printf("Reverse of the number is:%d",t);
}
/*
Enter any number:143
Reverse of the number is:341
*/
