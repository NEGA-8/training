#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z) {
        printf("Maximum number is: %d\n", x);
    } else if (y >= x && y >= z) {
        printf("Maximum number is: %d\n", y);
    } else {
        printf("Maximum number is: %d\n", z);
    }

    return 0;
}
