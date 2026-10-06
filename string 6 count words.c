#include<stdio.h>
#include<string.h>
int main() {
    char s[200];
    int i, words = 1;

    fgets(s, sizeof(s), stdin);

    for(i=0; s[i]!='\0'; i++){
        if(s[i]==' ' && s[i+1] != ' ' && s[i+1] != '\0')
            words++;
    }

    printf("Words = %d", words);
}
