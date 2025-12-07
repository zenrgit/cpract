//14. WAP to sort an array of integer numbers ascending order using bubble sort
#include<stdio.h>
void main()
{
	int n,a[100],i;
	int ascend(int a[],int n);
	printf("Enter the number of elements:");
	scanf("%d",&n);
    printf("Enter the Elements value:\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	ascend(a,n);
}
int ascend(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
}
/*  OUTPUT
Enter the number of elements:5
Enter the Elements value:
35
51
658
18
68
After sorting:
18
35
51
68
658
*/
