#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("Maximum number is: %d\n", x);
    } else if (y > x) {
        printf("Maximum number is: %d\n", y);
    } 
    return 0;
}
