
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],str3[100],result[300];
    printf("Enter first string:");
    scanf("%s",str1);
     printf("Enter second string:");
    scanf("%s",str2);
     printf("Enter third string:");
    scanf("%s",str3);

    strcpy(result,str1);
    strcat(result,str2);
    strcat(result,str3);
    printf("Concatenated string:%s\n",result);
    printf("Length:%lu\n",strlen(result));
    return 0;
}
