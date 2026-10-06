#include <stdio.h>
#include <string.h>

int main() {
    char s[100], out[100];
    int i, j, k=0, flag;

    fgets(s, sizeof(s), stdin);

    for(i=0; s[i] != '\0'; i++){
        flag = 0;
        for(j=0; j<i; j++){
            if(s[i] == s[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            out[k++] = s[i];
        }
    }

    out[k] = '\0';
    printf("%s", out);
    return 0;
}

