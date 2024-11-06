#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int a = 0, b = 1, fib = 0;
    for (unsigned int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    unsigned int n;
    printf("Enter the position (n) of the Fibonacci number: ");
    scanf("%u", &n);

    unsigned long long int result = fibonacci(n);
    printf("Fibonacci number at position %u is: %llu\n", n, result);

    return 0;
}
