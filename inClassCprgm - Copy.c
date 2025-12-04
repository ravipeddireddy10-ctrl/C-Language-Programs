#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i<10){
			if(i==1) printf("ONE\n");
			else if(i==2) printf("TWO\n");
			else if(i==3) printf("THREE\n");
			else if(i==4) printf("FOUR\n");
			else if(i==5) printf("FIVE\n");
			else if(i==6) printf("SIX\n");
			else if(i==7) printf("SEVEN\n");
			else if(i==8) printf("EIGHT\n");
			else if(i==9) printf("NINE\n");
		}else {
			if(i%2==0) printf("EVEN\n");
			else printf("ODD\n");
		}
	}
	return 0;
}