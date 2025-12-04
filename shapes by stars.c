//square
//#include <stdio.h>
//int main()
//{
//	int i,j,n;
//	printf("Enter a number : ");
//	scanf("%d",&n);
//	
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

	
//rectangle
//#include <stdio.h>
//int main()
//{
//	int i,j,rows,cols;
//	printf("Enter number of rows : ");
//	scanf("%d",&rows);
//	printf("Enter number of cols : ");
//	scanf("%d",&cols);
//	
//	for(int i=0; i<rows; i++){
//		for(int j=0; j<cols; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//right taiangle
#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


