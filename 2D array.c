#include<stdio.h>
int main(){
        int i,j,value,found=0;
        int a[3][3];
        printf("Enter the element of matrix:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the value to search:");
        scanf("%d",&value);
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(a[i][j]==value){
                    printf("Value found:%d row,%d column\n",i,j);
                    found=1;
                }
            }
        }
        if(found==0){
            printf("Value not found.\n");
        }
        return 0;

}
