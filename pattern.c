/*6. write a program to display following pattern
         1
       1 2
     1 2 3
   1 2 3 4
 1 2 3 4 5
*/
#include<stdio.h>
void main()
{
	int n,i,l,j;
	printf("Enter no. of rows:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(l=1;l<=n-i;l++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
/*
Enter no. of rows:5
    1
   12
  123
 1234
12345
*/
