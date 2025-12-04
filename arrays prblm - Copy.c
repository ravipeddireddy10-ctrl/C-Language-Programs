//#include <stdio.h>
//int main()
//{
//	float price[3];
//	printf("Enter 3 prices : ");
//	scanf("%f%f%f",&price[0],&price[1],&price[2]);
//	
//	printf("Total price 1 : %f",price[0]+(0.18*price[0]));
//	printf("Total price 2 : %f",price[1]+(0.18*price[1]));
//	printf("Total price 3 : %f",price[2]+(0.18*price[2]));
//	return 0;
//}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,sum = 0 ;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("%d",sum);
    return 0;
}