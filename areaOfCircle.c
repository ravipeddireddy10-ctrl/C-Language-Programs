#include<stdio.h>
int main()
{
	float base;
	float height;
	printf("Enter a base value : \n");
	scanf("%f",&base);
	
	printf("Enter a height value : ");
	scanf("%f",&height);
	
	printf("area of circle is : %f",0.5* base * height);
	return 0;
}