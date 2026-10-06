#include<stdio.h>
#include<string.h>
    int main(){
    char str[100];
    int i,found=0;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            found=1;
            break;
        }
    }
    if(found)
    printf("Found\n");
    else
        printf("Not Found\n");
    return 0;
}
