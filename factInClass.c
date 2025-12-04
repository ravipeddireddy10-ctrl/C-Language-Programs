#include <stdio.h>
int main()
{
	int n;
	double fac=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		fac=fac*i;
	}
	printf("%.0lf",fac);
	return 0;
}