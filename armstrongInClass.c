#include <stdio.h>
#include <math.h>
int main()
{
	int n,rem,temp,sum=0,count=0;
	scanf("%d",&n);
	temp = n;
	while(temp!=0){
		count++;
		temp=temp/10;
	}
	temp=n;
	while(temp!=0){
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp/=10;
	}
	if(sum==n) printf("ARMSTRONG");
	else printf("NOT AN ARSTRONG");
	return 0;
}