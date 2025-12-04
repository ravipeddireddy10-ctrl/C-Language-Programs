#include <stdio.h>
int main()
{
	int choice;
	double num1,num2;
	
	printf("Calculation Menu:\n");
	printf("1.Additon\n");
	printf("2.Subraction\n");
	printf("3.product\n");
	printf("4.division\n");
	printf("Choose a number (1-4): ");
	scanf("%d",&choice);
	
	printf("Enter two numbers : ");
	scanf("%lf%lf",&num1,&num2);
	
	switch(choice){
		case 1:
			printf("result is: %.2lf\n",num1 + num2);
			break;
		case 2:
			printf("result is : %.2lf\n",num1 - num2);
			break;
		case 3:
			printf("result is : %.2lf\n",num1 * num2);
			break;
		case 4:
		 	if(num2 != 0){
		 		printf("result is : %.2lf\n",num1 / num2);
			 }else{
			 	printf("undefined");
			 }
			 return 0;
			break;
		default :
				printf("Invalid character!\n");	
			break;	
	}
	return 0;
}