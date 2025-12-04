// Linearsearch
#include <stdio.h>
int main(){
   int n,key; scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++) scanf("%d",&a[i]);
   scanf("%d",&key);
   int found=0;
   for(int i=0;i<n;i++)
       if(a[i]==key){ printf("Found at index %d\n",i); found=1; }
   if(!found) printf("Not found");
}

