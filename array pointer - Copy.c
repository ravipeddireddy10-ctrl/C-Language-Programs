//Array is pointer
/*int *ptr = &arr[0]; 
int *ptr = arr;*/ //both r equal
#include <stdio.h>
int main()
{
	int aadhar[5];
	
	//input
	int *ptr = &aadhar[0];
	for(int i=0;i<5;i++){
		printf("%d Index : ",i);
		scanf("%d",&aadhar[i]);
	}
	
	//output 
	for(int i=0;i<=5;i++){
		printf("%d Index = %d",i,aadhar[i]);
	}
	return 0;
}