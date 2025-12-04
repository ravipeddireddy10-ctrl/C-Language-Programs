//max num in a array
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int arr[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&arr[i]);
//    }
//    
//    int max = arr[0];
//    
//    for(int i=1;i<n;i++){
//        if(arr[i] > max){
//            max=arr[i];
//        }
//    }
//    printf("%d\n",max);
//    return 0;
//}


//smallest ele in an array
//#include <stdio.h>
//int main()
//{
//	int n,min=0;
//	scanf("%d",&n);
//	int arr[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	min = arr[0];
//	for(int i=1;i<n;i++){
//		if(arr[i] < min){
//		min = arr[i];
//		}
//	}
//	printf("%d",min);
//	return 0;
//}


//sumof elements ina array
//#include <stdio.h>
//int main()
//{
//	int n,i,sum=0;
//	scanf("%d",&n);
//	int arr[n];
//	for(i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//		sum+=arr[i];
//	}
//	printf("%d",sum);
//	return 0;
//}


//avg in arrays
//#include <stdio.h>
//int main()
//{
//    int n;
//    float sum=0,avg;
//    scanf("%d",&n);
//    int arr[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&arr[i]);
//        sum+=arr[i];
//    }
//    avg = sum/n;
//    printf("%.2f",avg);
//    return 0;  
//}


//sum of even places in array
//#include <stdio.h>
//int main()
//{
//	int n,sum=0;
//	scanf("%d",&n);
//	int arr[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0;i<n;i+=2){
//		sum+=arr[i];
//	}
//	printf("%d",sum);
//	return 0;
//}


//sum of even numbers in array
//#include <stdio.h>
//int main()
//{
//	int n,sum=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0){
//			sum+=a[i];
//		}
//	}
//	printf("%d",sum);
//	return 0;
//}


//Absolute difference b/w sum of even and sum of odd elem...
//#include <stdio.h>
//int main()
//{
//	int n,soe=0,soo=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0){
//			soe+=a[i];
//		}else soo+=a[i];
//	}
//	int diff = soo-soe;
//	if(diff<0) printf("%d",-diff);
//	else printf("%d",diff);
//	
//	return 0;
//}


//Count of given element in an array or apperence of an ele
//#include <stdio.h>
//int main()
//{
//	int n,z,count=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	scanf("%d",&z);
//	for(int i=0;i<n;i++){
//		if(a[i]==z){
//			count++;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}


//Element search in an Array
//#include <stdio.h>
//int main()
//{
//	int n,z;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	scanf("%d",&z);
//	for(int i=0;i<n;i++){
//		if(a[i]==z){
//			printf("True");
//			return 0;
//		}
//	}
//	printf("False");
//	return 0;
//}


//sum of elements in an array that are in an odd index.
//#include <stdio.h>
//int main()
//{
//	int n,sum=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=1;i<n;i+=2){
//		sum+=a[i];
//	}
//	printf("%d",sum);
//	return 0;
//}


//Average element is in Array or Not
//#include <stdio.h>
//int main()
//{
//	int n,sum=0,avg;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		sum+=a[i];
//	}
//	avg=sum/n;
//	for(int i=0;i<n;i++){
//		if(a[i]==avg){
//			printf("True");
//			return 0;
//		}
//	}
//	printf("False");
//	return 0;
//}


/*An array can be called strictly odd, 
if every odd number in that array exists only at an odd index.*///DOUBT
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<n;i++){
//        if(a[i]%2!=0 && i%2==0){
//            printf("false");
//            return 0;
//        }
//    }
//    printf("True");
//    return 0;
//}


//Last Odd Number Index Position
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=n-1;i>=0;i--){
//		if(a[i]%2!=0){
//			printf("%d\n",i);
//			return 0;
//		}
//	}
//	printf("0\n");
//	return 0;
//}


//Last Even Element Index
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=n-1;i>=0;i++){
//		if(a[i]%2==0){
//			printf("%d",i);
//			return 0;
//		}
//	}
//	printf("0\n");
//	return 0;
//}


//Last odd number in an Array
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=n-1;i>=0;i--){
//		if(a[i]%2!=0){
//			printf("%d",a[i]);
//			return 0;
//		}
//	}
//	printf("0\n");
//	return 0;
//}


//Absolute difference b/w sum of even and sum of odd indexed elements
//#include <stdio.h>
//int main()
//{
//	int n,soe=0,soo=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(i%2==0){
//			soe+=a[i];
//		}else soo+=a5[i];
//	}
//	int d=soe-soo;
//	if(d<0) printf("%d",-d);
//	else printf("%d",d);
//	return 0;
//}


//Elements greater than average
//#include <stdio.h>
//int main()
//{
//	int n,sum=0,avg,count=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		sum+=a[i];
//	}
//	avg=sum/n;
//	for(int i=0;i<n;i++){
//		if(a[i]>=avg)
//		count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}


//Even Array
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(a[i]%2!=0){
//			printf("False\n");
//			return 0;
//		}
//	}
//	printf("True\n");
//	return 0;
//}


//Count numbers between even and odd numbers or vice versa
//#include <stdio.h>
//int main()
//{
//	int n,c=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=1;i<n-1;i++){
//		if((a[i-1]%2==0 && a[i+1]%2!=0)||
//		(a[i-1]%2!=0 && a[i+1]%2==0)){
//			c++;
//		}
//	}
//	printf("%d\n",c);
//	return 0;
//}


//Count Even Numbers between Odd Numbers
//#include <stdio.h>
//int main()
//{
//	int n,c=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=1;i<n-1;i++){
//		if(a[i]%2==0 && a[i-1]%2!=0 && a[i+1]%2!=0){
//			c++;
//		}
//	}
//	printf("%d\n",c);
//	return 0;
//}


//Strictly EVEN(even numbers at even places)
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(i%2!=0 && a[i]%2==0){
//			printf("False\n");
//			return 0;
//		}
//	}
//	printf("true\n");
//	return 0;
//}


//Sum of Elements not between A and B
#include <stdio.h>
int main()
{
	int n,a,b,sum=0;
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	scanf("%d %d",&a,&b);
	for(int i=0;i<n;i++){
		if(ar[i]<a || ar[i]>b){
			sum+=ar[i];
		}
	}
	printf("%d\n",sum);
	return 0;
}