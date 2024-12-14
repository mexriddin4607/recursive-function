#include <stdio.h>

void func(int a, int b) {
    if (a == b) { 
        printf("%d ", a); 
        return;
    }
    printf("%d ", a); 
    if (a < b) {
        func(a + 1, b);
    } else {
        func(a - 1, b); 
    }
}

int main() {
    int a, b;

    printf("A kiriting: ");
    scanf("%d", &a);
    printf("B kiriting: ");
    scanf("%d", &b);

    printf("Natija: ");
    func(a, b);
    printf("\n");

    return 0;
}