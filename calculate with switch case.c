#include<stdio.h>
int main(){
    float num1,num2,result;
    int choice;
    printf("Enter the numbers:");
    scanf("%f %f",&num1,&num2);
    printf("choose operation: 1:Add 2:sub 3:Mul 4:div");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        result=num1+num2;
        break;
     case 2:
        result=num1-num2;
        break;
     case 3:
        result=num1*num2;
        break;
     case 4:
         if(num2!=0)
        result=num1/num2;
        else{
                printf("Error\n");
        return 1;
        }
        break;
        default:printf("Invalid choice\n");
        return 1;

    }
    printf("Result:%.2f \n",result);
    return 0;
}
