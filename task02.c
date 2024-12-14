#include <stdio.h>


void func(int n) {
    if (n == 0) { 
        return; 
    }
    func(n - 1); 
    printf("%d ", n); 
}

int main() {
    int n;

    printf("N ni kiriting: ");
    scanf("%d", &n);

    printf("1 dan %d gacha sonlar: ", n);
    func(n);
    printf("\n");

    return 0;
}