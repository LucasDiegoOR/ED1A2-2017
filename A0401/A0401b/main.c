#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num, i;

    printf("Insira um número: ");
    scanf("%d", &num);

    printf("A função Fibonacci do número %d é:\n", num);
    printf("%d", fibonacci(num));

    return (EXIT_SUCCESS);
}

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}