#include <stdio.h>

void printArray(int *arr, int size) {
    printf("nhap cac phan tu trong mang:\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); 
    }
    printf("\n");
}
int main() {
    int number[] = {10, 20, 30, 40, 50};
    int size = sizeof(number) / sizeof(number[0]);  
    printArray(number, size);

    return 0;
}

