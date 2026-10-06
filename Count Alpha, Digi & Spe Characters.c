#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i;
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            special++;
        }
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}


