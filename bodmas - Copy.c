#include <stdio.h>
int main ()
{
    int a,b,c,d,i;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &i);
    printf("%d\n%d\n", a/b*c - b + a*d/3, (i++) + (++i));
    return 0;
}
#include <stdio.h>
int main()
{
	int r;
	float ac,acc;
	scanf("%d",&r);
	ac=3.14*r*r;
	acc=3.14*2*r;
	printf("ac:%.2f\nacc:%.2f",ac,acc);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("give a,b,c values:");
	scanf("%d,%d,%d",&a,&b,&c);
	big=a>b?(a>c?a:c):b>c?b:c;
	printf("big value is:%d",big);
}