#include <stdio.h>
int main()
{
	int marks;
	printf("Enter your age : ");
	scanf("%d",&marks);
	
	if(marks >= 0 && marks < 30){
		printf("FAIL");
	}else if(marks > 30 && marks <= 100){
		printf("PASS");
	}else{
		printf("wrong number");
	}
	return 0;
}