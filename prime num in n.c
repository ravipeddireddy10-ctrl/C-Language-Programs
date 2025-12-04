#include <stdio.h>
int main(){
	
    int n,i,j,count = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    if(n <= 1) printf("No prime numbers available");
    
    for(int i=2;i<=n;i++){
        count = 0;
        for(j=1;j<=i;j++){
            if(i % j == 0) count++;
        }
        if(count == 2) printf("%d\n",i);
    }
    return 0;
}
