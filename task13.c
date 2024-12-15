#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * factorial(n - 1); 
}

int main() {
    int n;

    printf("Sonni kiriting: ");
    scanf("%d", &n);

    if (n < 0) {
     printf("Faktorial manfiy sonlar uchun aniqlanmagan.\n");
    } else {
       printf( "%d = %d ", n, factorial(n));
    }

    return 0;
}