//Strings
//A character array terminated by a '\0'(null character)
// null character denotes string termination 
// Examples:
// 	char name[] = {'Z','A','I','D','\0'};
// 	char fullName[] = {'S','H','A','I','K','','Z','A','I','D','\0'};


#include <stdio.h>
int main()
{
	char name[] = {'Z','A','I','D','\0'};
	char name[] = "ZAID"; 
 	char fullName[] = {'S','H','A','I','K','','Z','A','I','D','\0'};
 	char name[] = "SHAIK ZAID";
	return 0;
}

//initialization Strings
//1. char name[] = {'Z','A','I','D','\0'};
//2. char name[] = "ZAID";(here \0 is not req..coz when double quotes were used c places \0 default at the end)