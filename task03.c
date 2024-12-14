#include <stdio.h>


void func(int n) {
    if (n <= 0) {
        return; 
    }
    if (n % 2 == 0) {
        printf("%d ", n); 
    }
    func(n - 1); 
}

int main() {
    int n;

    printf("N ni kiriting: ");
    scanf("%d", &n);

    printf("Juft sonlar teskari tartibda: ");
    func(n);
    printf("\n");

    return 0;
}