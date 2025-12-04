#include <stdio.h>
int main()
{
	int x;
	int *ptr;
	
	ptr = &x;
	*ptr = 0;//from here we got x= 0
	
	printf("x = %d\n",x);//here 0
	printf("*ptr = %d\n",*ptr);//hare 0 too
	
	*ptr += 5;// x = 5
	printf("x = %d\n",x);//here 5
	printf("*ptr = %d\n",*ptr);// and here 5 too
	
	//(*ptr)++ => *ptr = *ptr + 1;
	(*ptr)++;//6 as 5 + 1 
	printf("x = %d\n",x);//6
	printf("*ptr = %d\n",*ptr);//6
	return 0;
}