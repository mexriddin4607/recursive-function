#include <stdio.h>


int EKUB(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return EKUB(b, a % b); 
}

int main() {
    int a, b;

    printf("sonni kiriting: ");
    scanf("%d", &a);
    printf("2 ta sonni kiriting: ");
    scanf("%d", &b);

    int natija = EKUB(a, b);

    printf("EKUB(%d, %d) = %d\n", a, b, natija);

    return 0;
}