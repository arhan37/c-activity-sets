#include <stdio.h>
#include <stdbool.h>

int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[]) {
    for (int i = 2; i <= n; ++i) {
        a[i] = 1; 
    }
}

void eratosthenes_sieve(int n, int a[]) {
    for (int i = 2; i * i <= n; ++i) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0; 
            }
        }
    }
}

void output(int n, int a[]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; ++i) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    n = input_array_size();
    int a[n+1]; 
    
    init_array(n, a);
    eratosthenes_sieve(n, a);
    output(n, a);
    
    return 0;
}
