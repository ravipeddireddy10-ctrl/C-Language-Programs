//Standard Library Funcions --> <string.h>
//1. strlen(str) --> count no of characters excluding '\0'
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char name[] = "Shaikzaid";
	printf("Lenght is : %d",strlen(name));
	return 0;
}
*/

//2.strcpy(newStr,oldStr) --> copies values of old string to new string
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char oldStr[] = "Syedzaid";
	char newStr[] = "Shaikzaid";
	strcpy(newStr,oldStr);
	puts(newStr);
	return 0;
}
*/

//3. strcat(firstStr,secStr) --> concatenates first string with second string 
/*
#include <stdio.h>
#include <string.h>
int main()
{
	
	char firstStr[100] = "Hello";
	char secStr = "World";
	strcat(firstStr,secStr);
	puts(firstStr);
	return 0;
}
*/

//4. strcmp(firstStr,secStr) --> compare two strings  and returns a value 
//0 -> string equal
//positive -> first > second(ASCII)
//negetive -> first < second(ASCII) 
#include <stdio.h>
#include <string.h>
int main()
{
	char firstStr[] = "Apple";
	char secStr[] = "Banana";
	printf("%d",strcmp(secStr,firstStr));
	return 0;
}