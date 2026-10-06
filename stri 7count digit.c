#include <stdio.h>

int main() {
    char s[100];
    int i, d=0;

    fgets(s, sizeof(s), stdin);

    for(i=0; s[i]!='\0'; i++){
        if(s[i] >= '0' && s[i] <= '9')
            d++;
    }

    printf("Digits = %d", d);
}

