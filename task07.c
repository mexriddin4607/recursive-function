#include <stdio.h>

int EKUB(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return EKUB(b, a % b); 
}

int EKUK(int a, int b) {
    return (a * b) / EKUB(a, b); // EKUK formulasi
}

int main() {
    int a, b;

    printf("sonni kiriting: ");
    scanf("%d", &a);
    printf("sonni kiriting: ");
    scanf("%d", &b);

    int natija = EKUK(a, b);

    printf("EKUK(%d, %d) = %d\n", a, b, natija);

    return 0;
}