#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second numbers: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! Invalid operator.");
    }

    return 0;
}
