
#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0;
    float average;

    printf("Enter marks for 5 subjects: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum / 5.0;
    printf("Total marks: %d\n", sum);
    printf("Average marks: %.2f\n", average);

    return 0;
}
