#include <stdio.h>
int main()
{
	int p,t,r;
	float simpleInterest;
	scanf("%d%d%d",&p,&t,&r);
	simpleInterest = (p*t*r)/100;
	printf("Simple Interest is : %d",simpleInterest);
	return 0;
}