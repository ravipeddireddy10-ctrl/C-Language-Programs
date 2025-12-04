#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double num1, num2, result;
    char op;

    printf("=== Simple Calculator ===\n");
    printf("Operations available:\n");
    printf(" + (Addition)\n - (Subtraction)\n * (Multiplication)\n / (Division)\n");
    printf(" %% (Modulus)\n ^ (Power)\n r (Square Root)\n q (Quit)\n");

    for (;;) {
        printf("\nEnter first number: ");
        scanf("%lf", &num1);

        printf("Enter operation: ");
        scanf(" %c", &op);

        if (op == 'q') {
            printf("Exiting calculator...\n");
            break;
        }

        if (op == 'r') {
            if (num1 < 0) {
                printf("Error: Negative number cannot have real square root.\n");
            } else {
                result = sqrt(num1);
                printf("Result: %.2lf\n", result);
            }
            continue; // restart loop
        }

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                result = num1 / num2;
                break;
            case '%':
                if ((int)num2 == 0) {
                    printf("Error: Modulo by zero!\n");
                    continue;
                }
                result = (int)num1 % (int)num2;
                break;
            case '^': result = pow(num1, num2); break;
            default:
                printf("Invalid operator!\n");
                continue;
        }

        printf("Result: %.2lf\n", result);
    }

    return 0;
}
