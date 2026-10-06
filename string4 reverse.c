#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len;

    fgets(s, sizeof(s), stdin);
    len = strlen(s);

    printf("Reverse: ");
    for(i = len-1; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}

