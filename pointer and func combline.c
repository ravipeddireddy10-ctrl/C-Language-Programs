#include <stdio.h>

void square(int n);
void _square(int* n);

int main()
{
	int num = 4;
	square(num);
	printf("Number is : %d\n",num);
	
	_square(&num);
	printf("number is : %d\n",num);
	return 0 ;
}
//call by value:we pass value var as argument.
void square(int n){
	n = n*n;
	printf("Square is : %d\n",n);
}

void _square(int* n){
	*n = (*n) * (*n);//4 * 4
	printf("Square is : %d\n",*n);	
}