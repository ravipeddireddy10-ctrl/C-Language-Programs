#include <stdio.h>
//declaration/prototype
void printHello();//telline the compiler to do
void printGoodbye();

int main()
{
	printHello();//calling/fun call
	printGoodbye();
	return 0;
}
//fun definition
void printHello(){
	printf("Hello!\n");//doing work
}

void printGoodbye(){
	printf("Goodbye");
}

//#include <stdio.h>
// void namaste();
// void bonjour();
// 
// int main(){
// 	printf("Enter f for french and i for indian:");
// 	char ch;
// 	scanf("%c",&ch);
// 	
// 	if(ch == 'i'){
// 		namaste();
//	 }else{
//	 	bonjour();
//	 }
// 	
// 	return 0;
// }
// 
// void namaste(){
// 	printf("namaste\n");
// }
//
//void bonjour (){
//	printf("Bonjour\n");
//}