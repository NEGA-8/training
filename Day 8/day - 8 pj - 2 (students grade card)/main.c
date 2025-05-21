#include <stdio.h>

int main() {
    int size = 5, subject = 5;
    int roll[size];
    int mark[size][subject];
    int total[size];

    printf("Enter 5 roll numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &roll[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("Enter marks for student %d (roll %d):\n", i + 1, roll[i]);
        for (int j = 0; j < subject; j++) {
            scanf("%d", &mark[i][j]);
        }
    }

    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = 0; j < subject; j++) {
            sum += mark[i][j];
        }
        total[i] = sum;
    }

    printf("\n.............SCORE CARD..............\n");
    printf("Roll No\tTamil\tEnglish\tMaths\tScience\tSocial\tTotal\n");

    for (int i = 0; i < size; i++) {
        printf("%d\t", roll[i]);
        for (int j = 0; j < subject; j++) {
            printf("%d\t", mark[i][j]);
        }
        printf("%d\n", total[i]);
    }

    return 0;
}
