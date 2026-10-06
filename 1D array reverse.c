#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the Numbers of elements:");
    scanf("%d",&n);
    int arr[n],rev[n];
    printf("Enter %d integer number:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++){
    rev[i]=arr[n-1-i];
   }
   printf("\nOriginal array:");
   for(i=0;i<n;i++){
    printf("%d",arr[i]);
   }
   printf("\nReverse array: ");
   for(i=0;i<n;i++){
    printf("%d",rev[i]);
   }
   return 0;
}

