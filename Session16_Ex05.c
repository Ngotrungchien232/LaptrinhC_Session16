#include <stdio.h>

// Ham cap nhap phan tu trong mang
void capnhatphantu(int *arr, int new_value, int position) {
    arr[position] = new_value;
}
// ham in cac phan tu trong mang
void printArray(int *arr, int size) {
    printf("Mang sau klhi cap nhat la:\n");
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    // khai bao va gan gia tri cho mang
    int number[] = {10, 20, 30, 40, 50};
    int size = sizeof(number) / sizeof(number[0]);
    //in mang truoc khi nhap
    printf("Mang ban dau la:\n");
    printArray(number, size);
    capnhatphantu(number, 99, 1);
    //in mang sau khi cap nhat
    printArray(number, size);
    return 0;
}

