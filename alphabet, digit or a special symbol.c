//3. To find whether the entered character is alphabet, digit or a special symbol
#include<stdio.h>
void main()
{
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	printf("Character %c is an Alphabet",c);
	else
	{
		if(c>='0'&&c<='9')
		printf("Character %c is a Digit",c);
		else
		printf("Character %ca is a special symbol",c);
	}
}
/* OUTPUT
Enter a character:D
Character D is an Alphabet
*/
