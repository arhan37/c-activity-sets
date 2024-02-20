#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
    int n = input_number();
    int result = is_composite(n);
    output(n, result);
}

int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_composite(int n) {
    int result = 0;
    if (n <= 1) {
        result = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                result = 1;
                break;
            }
        }
    }
    return result;
}

void output(int n, int result) {
    if (result == 1) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}

