#include <stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    addNumbers(&num1, &num2, &result);

    printf("Sum: %d\n", result);

    return 0;
}

void addNumbers(int *num1, int *num2, int *result) {
    *result = *num1 + *num2;
}
