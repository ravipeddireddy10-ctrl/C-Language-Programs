//#include <stdio.h>
//int add(int a,int b){
//	return a+b;
//}
//int main()
//{
//	int x,y;
//	scanf("%d %d",&x,&y);
//	printf("%d\n",add(x,y));
//	return 0;
//}


//#include <stdio.h>
//int max(int a,int b){
//	if(a>b) return a;
//	else return b;
//}
//int main()
//{
//	int x,y;
//	scanf("%d %d",&x,&y);
//	printf("%d\n",max(x,y));
//	return 0;
//}


//#include <stdio.h>
//void greet(){
//	printf("Hello, welcome to my world\n");
//}
//int main()
//{
//	greet();
//	return 0;
//}


//#include <stdio.h>
//int EO(int n){
//	if(n%2==0) printf("%d is even\n",n);
//	else printf("%d is odd",n);
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	EO(num);
//	return 0;
//}


//#include <stdio.h>
//int fact(int n){
//	int fact=1;
//	for(int i=1;i<=n;i++){
//		fact*=i;
//	}	
//	return fact;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d\n",fact(n));
//	return 0;
//}


//#include <stdio.h>
//
//int isPrime(int n) {
//    int count = 0;
//
//    if (n <= 1)
//        return 0;
//
//    for (int i = 1; i <= n; i++) {
//        if (n % i == 0)
//            count++;
//    }
//
//    if (count == 2)
//        return 1;
//    else
//        return 0;
//}
//
//int main() {
//    int n;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//
//    if (isPrime(n))
//        printf("%d is a Prime number.\n", n);
//    else
//        printf("%d is NOT a Prime number.\n", n);
//
//    return 0;
//}


#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed Number = %d\n", reverse(num));
    return 0;
}
