
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i;

    fgets(a, sizeof(a), stdin);

    for(i=0; a[i] != '\0'; i++)
        b[i] = a[i];
   // b[i] = '\0';

    printf("Copied: %s", b);
    return 0;
}
