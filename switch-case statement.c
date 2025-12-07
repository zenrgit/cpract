/*4. Write a C program to design arithmetic calculator which does mathematical operation such as add,
subtract, divide, multiply and modulus using switch-case statement*/
#include<stdio.h>
void main()
{
	int a,b,c,choice;
	float x;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			c=a+b;
			printf("Sum=%d",c);
			break;
		case 2:
			c=a-b;
			printf("Difference=%d",c);
			break;
		case 3:
			c=a*b;
			printf("Product=%d",c);
			break;
		case 4:
			x=(float)a/b;
			printf("Quotient=%f",x);
			break;
		case 5:
			c=a%b;
			printf("Remainder=%d",c);
			break;
		default:
			printf("Invalid choice!");
	}
}
/* OUTPUT
Enter two numbers:10 3

1.Add
2.Subtract
3.Multiply
4.Divide
5.Modulus

Enter your choice:4
Quotient=3.333333
*/
