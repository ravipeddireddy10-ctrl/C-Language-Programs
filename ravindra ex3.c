//#include<stdio.h>
//int main()
//{
//	char a;
//	char b[10];
//	char c[20];
//	printf("enter a character : ");
//	scanf("%c",&a);
//	printf("enter a word : ");
//	scanf("%s", b);
//	printf("enter a sentence : ");
//	scanf("%[^\n]s", c);
//    printf("character:%c\nword:%s\nsentence:%s",a,b,c);
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r;
	double si,ci;
	printf("Enter p,t,r values : ");
	scanf("%d%d%d",&p,&t,&r);
	si = (p*t*r)/100.0;
	ci = p*pow(1+r/100.0,t)-p;
	printf("Simple Interest is : %lf\nCompond Interest is %lf: ",si,ci);
	return 0;
}