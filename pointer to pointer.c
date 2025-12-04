//pointer to pointer
//syntax: just add another * and p for...(*ptr) like **pptr
//int **pptr;
//char **pptr;
//float **pptr;

#include <stdio.h>
int main()
{
//	float price = 100;
//	float *ptr = &price;
//	float **pptr = &ptr;
	
	int i = 5;
	int *ptr = &i;
	int **pptr = &ptr;
	
	printf("%d\n",**pptr);
	
	return 0 ;
}