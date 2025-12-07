//15. WAP to perform matrix addition
#include<stdio.h>
void main()
{
	int m,n,i,j,a[10][10],b[10][10],c[10][10];
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of Matrix 1\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of Matrix 2\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The sum of two matrices is:\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
/*  OUTPUT
Enter the number of rows and columns:2 3
Enter the elements of Matrix 1
Enter a value:1
Enter a value:2
Enter a value:3
Enter a value:4
Enter a value:5
Enter a value:6
Enter the elements of Matrix 2
Enter a value:6
Enter a value:5
Enter a value:4
Enter a value:3
Enter a value:2
Enter a value:1
The sum of two matrices is:
7       7       7
7       7       7
*/
