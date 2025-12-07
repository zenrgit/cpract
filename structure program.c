/*19. WAP to declare structure for employee record having names, employee code, salary and read the
 Information about the employee having salary greater than 10,000.(using array of structure)*/
 #include<stdio.h>
 struct employee
 {
 	char name[20];
 	int ecode;
 	int salary;
 };
 void main()
 {
    struct employee emp[10];
 	int n,i;
 	printf("How many Employee record you want to Add\nEnter limit:");
 	scanf("%d",&n);
 	
 	for(i=0;i<=n-1;i++)
 	{
 		printf("----------------------------------------");
 		printf("\n\tEnter Details of Employee-%d",i+1);
 		printf("\n----------------------------------------");
 		printf("\nName of the Employee:");
 		scanf("%s",&emp[i].name);
 		printf("Employee-Code:");
 		scanf("%d",&emp[i].ecode);
 		printf("Salary:");
 		scanf("%d",&emp[i].salary);
	 }
	printf("\n\nDetails of Employee whose Salary > 10,000\n\nName\tEcode\tSalary\n");
	printf("----------------------------------------");
	for(i=0;i<=n-1;i++)
	{
		if(emp[i].salary>10000)
		{
			printf("\n%s\t%d\t%d\n",emp[i].name,emp[i].ecode,emp[i].salary);
		}
	 } 
 }
 
 /*******OUTPUT*******
 How many Employee record you want to Add
Enter limit:3
----------------------------------------
        Enter Details of Employee-1
----------------------------------------
Name of the Employee:Ramesh
Employee-Code:32
Salary:9000
----------------------------------------
        Enter Details of Employee-2
----------------------------------------
Name of the Employee:Suresh
Employee-Code:53
Salary:14000
----------------------------------------
        Enter Details of Employee-3
----------------------------------------
Name of the Employee:Niggesh
Employee-Code:69
Salary:12000


Details of Employee whose Salary > 10,000

Name    Ecode   Salary
----------------------------------------
Suresh  53      14000

Niggesh 69      12000
 */
