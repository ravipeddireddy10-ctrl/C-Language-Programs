//Arrays-->collecton of  ller data types stored at contigous memory location
/*syntax
int marks[3];
char[10];
float price[2]; */
/*input &output
scanf("%d",&marks[0];
printf("%d",&marks[0]; */
#include <stdio.h>
int main()
{
//	int marks1 = 90;
//	int marks2 = 95;
//	int marks3 = 89;
	
	int marks[3];
	printf("enter phy : ");
	scanf("%d\n",&marks[0]);
	
	printf("enter chem : ");
	scanf("%d\n",&marks[1]);
	
	printf("enter math : ");
	scanf("%d\n",&marks[2]);
	
	printf("phy = %d, chem = %d, math = %d",marks[0],marks[1],marks[2]);
	return 0;
}
//INITIALISATION 
