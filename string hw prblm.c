//#include <stdio.h>
//int main()
//{
//	char str[100];
//	printf("Enter a string : ");
//	fgets(str,sizeof(str),stdin);
//	
//	for(int i=0;str[i] != '\0';i++){
//		if(str[i] == 'a') str[i] = 'A';
//		else if(str[i] == 'e') str[i] = 'E';
//		else if(str[i] == 'i') str[i] = 'I';
//		else if(str[i] == 'o') str[i] = 'O';
//		else if(str[i] == 'u') str[i] = 'U';
//	}
//	printf("Modified String : %s",str);
//	return 0;
//}

#include <stdio.h>

void convertVow(char str[]){
	for(int i=0;str[i] != '\0';i++){
		switch(str[i]){
			case 'a': str[i] = 'A'; break;
			case 'e': str[i] = 'E'; break;
			case 'i': str[i] = 'I'; break;
			case 'o': str[i] = 'O'; break;
			case 'u': str[i] = 'U'; break;
		}
	}
}

int main()
{
	char str[100];
	printf("Enter a string : ");
	fgets(str,sizeof(str),stdin);
	
	convertVow(str);
	
	printf("Modified string is : %s",str);
	return 0;
}
