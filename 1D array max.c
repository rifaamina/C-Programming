#include<stdio.h>
int main(){
    int max,mini,n,i;
    printf("Numbers:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    max=array[0];
    mini=array[0];
    for(i=1;i<n;i++){
        if(array[i]>max)
            max=array[i];
        if(array[i]<mini)
            mini=array[i];
    }
    printf("maximum=%d\n",max);
    printf("minimum=%d\n",mini);
    return 0;
}
