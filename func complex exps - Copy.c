//#include <stdio.h>
//int sum(int a,int b);
//int main ()
//{
//	int a,b;
//	printf("Enter first number : ");
//	scanf("%d",&a);
//	printf("Enter second number : ");
//	scanf("%d",&b);
//	
//	int s = sum(a,b);
//	printf("sum is : %d",s);
//	return 0;
//}
//
//int sum(int X,int Y){
//	return X + Y;
//}

//#include <stdio.h>
//
//float sum (int a, int b);
//int main()
//{
//	float a,b;
//	printf("Enter number a : ");
//	scanf("%f",&a);
//	printf("Enter number b : ");
//	scanf("%f",&b);
//	
//	printf ("sum is : %f",sum(a,b));
//	return 0;
//}
//
//float sum (int a,int b){
//	return a + b;
//}


#include <stdio.h>
#include <math.h>

double sqRoot(double n);

int main()
{
	double num;
	printf("Enter a number : ");
	scanf("%lf",&num);
	
	printf("Square Root of %.2f is : %.2f",num,sqRoot(num));
	return 0;
}

double sqRoot(double n){
	return sqrt(n);
}