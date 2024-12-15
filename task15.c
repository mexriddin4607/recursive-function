#include <stdio.h>

void reverseString(char arr[], int index) {
    if (arr[index] == '\0') {
        return; 
    }
    reverseString(arr, index + 1); 
    printf("%c", arr[index]);
}

int main() {
    char arr[100];

    printf("Suzni kiriting: ");
    scanf("%s", arr); 

    printf("Teskatisi : ");
    reverseString(arr, 0); 
    printf("\n");

    return 0;
}