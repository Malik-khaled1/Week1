#include <stdio.h>

int main() {
    char operation;
    double n1, n2;

    printf("Indtast en operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Indtast to tal: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operation) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
            break;
        default:
            printf("Fejl! Ugyldig operator\n");
    }

    return 0;
}
