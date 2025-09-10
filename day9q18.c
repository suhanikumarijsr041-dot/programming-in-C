Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
	#include <stdio.h>

int main() {
    int percentage;

    // Input percentage
    printf("Enter percentage (0-100): ");
    scanf("%d", &percentage);

    // Check valid input
    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
    }
    else if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    }
    else if (percentage >= 80 && percentage <= 89) {
        printf("Grade: B\n");
    }
    else if (percentage >= 70 && percentage <= 79) {
        printf("Grade: C\n");
    }
    else if (percentage >= 60 && percentage <= 69) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}
