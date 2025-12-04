//print all the odd numbers from 5 to 50
//#include <stdio.h>
//int main()
//{
//	for(int i=5; i<=50; i++){
//		if(i % 2 != 0){
//			printf("%d\n",i);
//		}//odd
//	}
//	return 0;
//}

//print sum of numbers from 5 to 50
#include <stdio.h>
int main()
{
	int sum=0;
	for(int i=5; i<=50; i++){
		sum += i;
	}
	printf("sum is %d",sum);
	return 0;
}