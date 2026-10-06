#include <stdio.h>
#include <string.h>

int main() {
    char s[100], out[100];
    int i, j=0;

    fgets(s, sizeof(s), stdin);

    for(i=0; s[i]!='\0'; i++){
        if(s[i] != ' ')
            out[j++] = s[i];
    }
    out[j] = '\0';

    printf("%s", out);
    return 0;
}

