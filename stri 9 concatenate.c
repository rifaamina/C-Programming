#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[50];
    int i, j;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    for(i=0; a[i]!='\0'; i++)
    for(j=0; b[j]!='\0'; j++, i++)
        a[i] = b[j];

    a[i] = '\0';

    printf("Joined: %s", a);
    return 0;
}

