
#include <stdio.h>
int main() {
    int ageArif, ageFahmid, ageJoy;
    printf("Enter ages of Arif, Fahmid, and Joy: ");
    scanf("%d %d %d", &ageArif, &ageFahmid, &ageJoy);
    if(ageArif <= ageFahmid && ageArif <= ageJoy)
        printf("Youngest: Arif\n");
    else if(ageFahmid <= ageArif && ageFahmid <= ageJoy)
        printf("Youngest: Fahmid\n");
    else
        printf("Youngest: Joy\n");
    return 0;
}
