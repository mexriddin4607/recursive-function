#include <stdio.h>

int Yigindi(int n) {
    if (n == 0) {
        return 0; 
    }
    return (n % 10) +Yigindi(n / 10); 
}

int main() {
    int n;

    printf("Sonni kiriting: ");
    scanf("%d", &n);

    printf("Raqamlar yig'indisi: %d\n", Yigindi(n));

    return 0;
}