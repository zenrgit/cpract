//12. WAP find out sum and average of given array element.
#include<stdio.h>
void main()
{
	int n,i,a[100],sum=0;
	float avg;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a value:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of the numbers entered is %d",sum);
	avg=(float)sum/n;
	printf("\nAverage of the numbers entered is %f",avg);
}
/* OUTPUT
Enter the number of elements:4
Enter a value:45
Enter a value:68
Enter a value:51
Enter a value:23
Sum of the numbers entered is 187
Average of the numbers entered is 46.750000
*/
