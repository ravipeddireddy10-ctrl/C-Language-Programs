#include<stdio.h>

int calPercentage(int science, int math, int sanskrit);

int main()
{
	int sc = 98;
	int math = 99;
	int sanskrit = 95;
	printf("per is : %d",calPercentage(sc,math,sanskrit));
	return 0;
}

int calPercentage(int science, int math, int sanskrit){
	return ((science + math + sanskrit)/3);
}