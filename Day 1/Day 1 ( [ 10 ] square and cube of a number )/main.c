#include <stdio.h>

int main() {
    int x, square, cube;

    printf("Enter a number: ");
    scanf("%d", &x);

    square = x * x;
    cube = x * x * x;

    printf("Square of %d is %d\n", x, square);
    printf("Cube of %d is %d\n", x, cube);

    return 0;
}
