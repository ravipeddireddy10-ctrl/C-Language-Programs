//fib(n) = fib(n-1) + fib(n-2)
//0,1,1,2,3,5,8,13,21,.....(every next num is the sum of its first two numbers)
#include <stdio.h>

int fib(int n);

int main()
{
	printf("%d", fib(6));
	return 0;
}

int fib(int n){
		if(n == 0){
			return 0;
		}
		if(n == 1){
			return 1;
		}
		
	int fibNm1 = fib(n-1);
	int fibNm2 = fib(n-2);
	int fibN = fib(n-1) + fib(n-2);
	//printf("fib of %d is : %d\n",n, fibN);
	return fibN;
}