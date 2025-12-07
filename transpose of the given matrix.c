//16. WAP to read elements in a matrix of size MXN and find transpose of the given matrix.
#include<stdio.h>
void main()
{
	int m,n,i,j,a[10][10],b[10][10];
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of Matrix\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The original matrix is:\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	
	printf("The transpose of this matrix is:\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}

/*  OUTPUT
Enter the number of rows and columns:2 3
Enter the elements of Matrix
Enter a value:1
Enter a value:2
Enter a value:3
Enter a value:4
Enter a value:5
Enter a value:6
The original matrix is:
1       2       3
4       5       6
The transpose of this matrix is:
1       4
2       5
3       6
*/
