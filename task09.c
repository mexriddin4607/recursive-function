#include <stdio.h>

int func(int n, int m) {
    if (m == 0) {
        return 1; 
    }
    return n * func(n, m - 1); 
}

int main() {
    int n, m;

    printf("N qiymatni kiriting : ");
    scanf("%d", &n);
    printf("M qiymatni kiriting : ");
    scanf("%d", &m);

    int natija = func(n, m);

    printf("%d ning %d-darajasi = %d\n", n, m, natija);

    return 0;
}