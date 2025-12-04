#include <stdio.h>
int main()
{
	int n,s=0;
	printf("Enter no of array elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		s+=a[i];
	}
	printf("%d",s);
	return 0;
}


#include <stdio.h>
int main()
{
	int n;
	printf("Enter no of array elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=n-1;j>=0;j--){
		printf(" %d",a[j]);
	}
	return 0;
}


#include <stdio.h>
int main()
{
	int n,l=0,s=0;
	printf("Enter no of array elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>l) l=a[i];
		if(a[i]<s) s=a[i];
	}
	printf("%d %d",l,s);
	return 0;
}

#include <stdio.h>

int main() {
   int n, pos, newValue;

   printf("Enter number of elements: ");
   scanf("%d", &n);

   int arr[n];
   printf("Enter %d elements:\n", n);
   for(int i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }

   printf("Enter position to replace (1-%d): ", n);
   scanf("%d", &pos);

   printf("Enter new value: ");
   scanf("%d", &newValue);

   if(pos >= 1 && pos <= n) {
       arr[pos - 1] = newValue;
   } else {
       printf("Invalid position!\n");
       return 0;
   }

   printf("Updated array:\n");
   for(int i = 0; i < n; i++) {
       printf("%d ", arr[i]);
   }

   return 0;
}


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int s, found = 0;
    printf("Enter element to be searched: ");
    scanf("%d", &s);

    printf("\nElement %d found at positions: ", s);
    for (int i = 0; i < n; i++) {
        if (a[i] == s) {
            printf("%d ", i + 1); 
            found = 1;
        }
    }

    if (!found) {
        printf("Not found");
    }

    printf("\n");
    return 0;
}

