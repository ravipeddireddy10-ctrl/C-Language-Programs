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
//	 }else if(ch == 'f'){
//	 	bonjour();
//	 }else{
//	 	
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

#include <stdio.h>
void namaste();
void hola();
void hello();
int main()
{
	char ch;
	printf("Choose e for english,t for telugu,i for italic : ");
	scanf(" %c",&ch);
	
	if(ch == 't'){
		namaste();
	}else if(ch == 'i'){
		hola();
	}else if(ch == 'e'){
		hello();
	}else{
		printf("not a valid letter");
	}
	return 0;
}
void namaste(){
	printf("Namaste ela vunnaru\n");
}
void hola(){
	printf("Hola\n");
}
void hello(){
	printf("Hello what's up\n");
}