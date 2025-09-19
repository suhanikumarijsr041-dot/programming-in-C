#include <stdio.h>

int main() {
    float a, b, c;

    // Input side lengths
    printf("Enter three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check for triangle validity
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle.\n");
    } else {
        // Classification
        if (a == b && b == c) {
            printf("Equilateral triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle.\n");
        } else {
            printf("Scalene triangle.\n");
        }
    }

    return 0;
}

