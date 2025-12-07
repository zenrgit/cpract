//13. Write a C program to find largest and smallest element in an array
#include<stdio.h>
void main()
{
	int n,a[100],i,large,small;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a value:");
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=1;i<=n-1;i++)
	{
		if(large<a[i])
		large=a[i];
	}
	small=a[0];
	for(i=1;i<=n-1;i++)
	{
		if(small>a[i])
		small=a[i];
	}
	printf("The largest number is %d",large);
	printf("\nThe smallest number is %d",small);
}
/* OUTPUT
Enter the number of elements:5
Enter a value:34
Enter a value:56
Enter a value:42
Enter a value:75
Enter a value:16
The largest number is 75
The smallest number is 16
*/
