#include <stdio.h>

void func(int n) {
    if (n <= 0) {
        return; 
    }
    printf("Hello Code\n"); 
    func(n - 1);
}

int main() {
    int n;

    printf("N ni kiriting: ");
    scanf("%d", &n);

    printf("Natija:\n");
    func(n);

    return 0;
}