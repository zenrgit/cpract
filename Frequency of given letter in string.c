//17. Write a program to count the Frequency of given letter in string
#include<stdio.h>
void main()
{
	char a[20],ch;
	int i,count=0;
	printf("Enter a string:");
	gets(a);
	printf("Enter a character to check its frequency in given string:");
	scanf("%c",&ch);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(ch==a[i])
		count++;
	}
	printf("Frequency of given letter is %d",count);
}
/* OUTPUT
Enter a string:Nigga What!
Enter a character to check its frequency in given string:g
Frequency of given letter is 2
*/
