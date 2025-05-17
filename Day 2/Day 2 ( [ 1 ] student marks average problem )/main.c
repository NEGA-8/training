#include <stdio.h>

int main() {
    int x, total = 0;
    float average;

    printf("Enter 5 marks:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &x);
        total += x; 
    }
   
    average = total / 5.0;
   
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);


    return 0;
}  




