//functions
//block of code that performs partucular tasks
//take argument(int parameters) -----> do work ----->return result(op)
//it can be used multiple times 
//increases code reuseabiltiy 
//
//<tell the compiler>
//syntax : 1
//Function "Prototype" or "declaration"
//void printHello();
//
//<do the work>
//syntax : 2
//function "definiton"
//void printHello(){
//	printf("Hello");
//}
//
//<use to work>
//syntax : 3
//Function Call
//int main(){
//	printHello();
//	return 0;
//}

#include <stdio.h>
//declaration/prototype
void printHello();//telline the compiler to do

int main()
{
	printHello();//calling/fun call
	printHello();//calling several times
	printHello();//calling several times
	return 0;
}
//fun definition
void printHello(){
	printf("Hello!\n");//doing work
	printf("My name is Shaik Zaid\n");
}


//1.Execution always start from main
//2.A func gets called directly or indirectly from main
//3.There can be multiple func in a program+
