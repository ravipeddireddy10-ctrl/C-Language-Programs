#include <stdio.h>

void printHW(int count);

int main()
{
	printHW(15);
	return 0;
}
//recursive func
void printHW(int count ){
	if(count == 0){
		return;
	}
	printf("Hello World\n");
	printHW(count-1);
}

//prop of recurssion
//a. anything that can be done with iterration ,can be done with recurssion and vice versa.
//b. recurssion can sometimes gives the most simple solution.
//c. base case in the cond which stops recurrsion.Should be remembered.
//d. iteration has infinite looop and recurssion has stack over flow. 