#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float average;

   
    printf("Enter 5 subject marks:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

   
    average = (m1 + m2 + m3 + m4 + m5) / 5.0;

  
    printf("Average: %.2f\n", average);


    if (average >= 90) {
        printf("Grade: A\n");
    } else if (average >= 80) {
        printf("Grade: B\n");
    } else if (average >= 70) {
        printf("Grade: C\n");
    } else if (average >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
