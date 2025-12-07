/* 10. WAP to find the value of nCr (Combination) using function. The standard formula for
nCr=n!/r!*(n-r)! */
#include<stdio.h>
void main()
{
	int n,r,ncr;
	printf("Enter value of n and r:");
	scanf("%d%d",&n,&r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("Value of ncr is %d",ncr);
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
Enter value of n and r:10 5
Value of ncr is 252
*/
