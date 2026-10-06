#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i,len=0;
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++)
        len++;
        printf("Length=%d",len-1);
    return 0;
}
