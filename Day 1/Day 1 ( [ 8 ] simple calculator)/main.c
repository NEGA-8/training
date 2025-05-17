#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x, y;
  
    char choice;

  
    printf("Enter the Operator:");
    scanf(" %c", &choice);

    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    
    switch (choice) {
    case '+':
        printf("%d + %d = %d", x, y, x + y);
        break;

    case '-':
        printf("%d - %d = %d", x, y, x - y);
        break;

    case '*':
        printf("%d * %d = %d", x, y, x * y);
        break;
    case '/':
        printf("%d / %d = %d", x, y, x / y);
        break;
    default:
        printf("Invalid Operator Input");
    }
  
    return 0;
}