#include <stdio.h>

int main() {
    int n, i;

    // Prompt user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
