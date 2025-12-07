//18. WAP to implement string manipulating function (any five) used string.h header file
#include<stdio.h>
#include<string.h>
void main()
{
	int l;
	char s1[100],s2[100],a[100],b[100];
	printf("Enter 1st String:");
	gets(s1);
	
	l=strlen(s1);
	printf("The string length is: %d\n",l);
	
	printf("\nEnter 2nd String:");
	gets(s2);
	
	strcat(s1,s2);
	printf("The concatenated string is= %s\n",s1);
	
	printf("\nEnter 3rd string:");
	gets(a);
	
	strcpy(b,a);
	printf("\nThe new string is= %s",b);
	
	if(strcmp(a,b)==0)
	printf("\nThe two strings are equal");
	else
	 if(strcmp(a,b)>0)
	 printf("\n%s string is greater",a);
	 else
	 printf("\n%s string is greater",b);
	
	strrev(a);
	printf("\nThe reversed string is= %s",a);
}
/* OUTPUT
Enter 1st String:Football
The string length is: 8

Enter 2nd String:Cricket
The concatenated string is= FootballCricket

Enter 3rd string:Golf

The new string is= Golf
The two strings are equal
The reversed string is= floG
*/
