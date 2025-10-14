//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char op;
    int num1, num2;

    // Input operator and operands
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // Note the space before %c to consume any leftover newline
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operation using switch-case
    switch(op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if(num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Error: Modulus by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
