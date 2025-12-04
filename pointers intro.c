//pointer -->a variable that stores the memory address of another variable
//syntax
//int *ptr = &age;.....* is value at address and...& is address of operator
//for this *ptr(pointer variable)...we assingned address of age i.e &age
//the format specifier are..%p or %u


//#include <stdio.h>
//int main()
//{
//	int age = 22;
//	int *ptr = &age;
//	int _age = *ptr;
//	printf("%d",_age);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int age = 22;
//	int *ptr = &age;
//	
//	//address
//	//printf("%p\n",&age
//	printf("%u\n",&age);
//	printf("%u\n",ptr);
//	printf("%u\n",&ptr);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int age = 22;
	int *ptr = &age;
	
	//value
	printf("%d\n", age);
	printf("%d\n", *ptr);
	printf("%d\n", *(&age));
	return 0;
}

