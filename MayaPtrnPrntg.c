//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			printf("%d ",i);
//		}
//		printf("%\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		for(int j=n-i+1;j<=n;j++){
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=n;i>=1;i--){
//		for(int j=i;j<=n;j++){
//			printf("%c ",64+i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=n;i>=1;i--){
//		for(int j=1;j<=i;j++){
//			printf("%d",j);
//		}
//		for(int s=1;s<=n-i;s++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int mid=(n/2)+1;
	char ch = 'A';
	for(int i=1;i<=n;i++){
		int spaces = (i<=mid)?i-1:n-i;
		for(int j=1;j<=spaces;j++) printf(" ");
		if(i==mid) printf("%c",ch);
		else printf("%c %c",ch,ch);
		printf("\n");
		ch++;
	}
	
	return 0;
}