//#include <stdio.h>
//int main ()
//{
//	int num;
//	printf("Enter a number : ");
//	scanf("%d",&num);
//
//	for(int i=1; i<=10; i++){
//		printf("%d x %d = %d\n",num,i,num * i);
//	}
//	return 0;
//}

//sum of n numbers
#include <stdio.h>
int main()
{
	int n, sum=0;
	printf("Enter how many numbers : ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		int x;
		printf("Enter number %d:",i);
		scanf("%d",&x);
		sum += x;
	}
		printf("sum = %d\n",sum);
		return 0;
}
