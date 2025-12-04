//marks
//#include <stdio.h>;
//int main ()
//{
//	int marks;
//	printf("Enter ur marks: ");
//	scanf("%d",&marks);
//	
//	if(marks >=0 && marks < 30){
//		printf("FAIL");
//	} else if(marks > 30 && marks <= 100){
//		printf("PASS");
//	}else{
//		printf("wrong marks");
//	}
//}


//grades
#include <stdio.h>
int main ()
{
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks < 30){
		printf("your grade is C\n");
	}else if(marks >= 30 && marks <70){
		printf("your grade is B\n");
	}else if(marks >= 70 && marks < 90){
		printf("your grade is A\n");
	}
	else{
		printf("your grade is A++");
	}
	return 0;
}


//leap year finder
//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("Enter year : ");
//	scanf("%d",&year);
//	
//	if((year % 400 == 0 || year % 4 ==0 && year % 100 != 0)){
//		printf("this year is a leap year : ");
//	}else{
//			printf("this is not a leap year");
//		}
//		return 0;
//	}
//

//largest number
//#include <stdio.h>;
//int main()
//{
//	int a,b,c;
//	printf("Enter three numbers : ");
//	scanf("%d%d%d",&a,&b,&c);
//	
//	if(a >= b && a >= c){
//		printf("largest number is : %d",a);
//	}else if(b >= a && b >= c){
//		printf("largest number is : %d",b);
//	}else{
//		printf("largest number is : %d",c);
//	}
//	return 0;
//}
//
