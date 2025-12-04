#include<stdio.h>
int main()
//perimeter of  rectangle
{
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	printf("Perimetr of a rectangle is : %d", 2 * (a + b));
	return 0;
}