//Strings using Pointers
//char *str = "Hello World";(Store sting in memory &the assigned address is stored in the char pointer 'str')
//
//char *str = "Hello World"; (can be reinitialised)that is it can be changed again
//
//char str[] = "Hello World"; (cant be re initialised)

#include <stdio.h>
int main()
{
	char *canChange = "Hello World";
	puts(canChange);
	canChange = "Hello";
	puts(canChange);
	
//	char cannotChange[] = "Hello World";
//	puts(cannotChange);
//	cannotChange = "Hello";
//	puts(cannotChange); (this will give error)
	return 0;
}