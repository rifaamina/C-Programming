
#include <stdio.h>

int main() {
    char name[50];
    int id;
    float salary, bonus, total;

    printf("Enter employee name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter employee ID: ");
    scanf("%d", &id);

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter bonus: ");
    scanf("%f", &bonus);

    total = salary + bonus;

    printf("\nEmployee Details\n");
    printf("Name: %s", name);
    printf("ID: %d\n", id);
    printf("Total Compensation: %.2f\n", total);

    return 0;
}
