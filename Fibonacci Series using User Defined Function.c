#include <stdio.h>
void fibonacci(int n) {
    int num1 = 0, num2 = 1, NUM, i;

    printf("Fibonacci Series:\n");

    for(i = 1; i <= n; i++) {
        printf("%d ", num1);
        NUM = num1 + num2;
        num1 = num2;
        num2 = NUM;
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);

    return 0;
}

