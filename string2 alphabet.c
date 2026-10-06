
#include <stdio.h>
#include <string.h>
int main (){
    char s[100];
    int i,up=0,low=0;
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='A'&& s[i]<='Z')
        up++;
        else if(s[i]>='a'&& s[i]<='z')
            low++;
    }
    printf("upper=%d \n lower=%d",up,low);
    return 0;
}
