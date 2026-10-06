
#include <stdio.h>

int main() {
    int numComputers;
    float price, totalSales=0, grossSalary;

    printf("Enter the number of computers sold: ");
    scanf("%d", &numComputers);
    for(int i = 0; i < numComputers; i++) {
        printf("Enter price of computer %d: ", i+1);
        scanf("%f", &price);
        totalSales += price;
    }
    grossSalary = 1500 + (200 * numComputers) + (0.02 * totalSales);

    printf("Gross salary: $%.2f\n", grossSalary);

    return 0;
}
