#include <stdio.h>

int main() {
    float basic, hra, da, gross;
    printf("Basic Salary: ");
    scanf("%f", &basic);
    printf(" HRA  ");
    scanf("%f", &hra);
    printf(" DA ");
    scanf("%f", &da);
    gross = basic + hra + da;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
