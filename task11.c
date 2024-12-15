#include <stdio.h>

void func(int n) {
    if (n <= 0) {
        return; 
    }
    func(n - 1); 
    if (n % 2 == 0) {
        printf("%d ", n);
    }
}

int main() {
    int n;

    printf("N ni kiriting: ");
    scanf("%d", &n);

    printf("Natija: ");
    func(n);
    printf("\n");

    return 0;
}