#include <stdio.h>

int main() {
    int marks;

    printf("the marks obtained: ");
    scanf("%d", &marks);

    if (marks >= 35) {
        printf("passed \n");
    } else {
        printf("failed \n");
    }

    return 0;
} 