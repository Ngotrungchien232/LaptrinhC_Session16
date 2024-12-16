#include <stdio.h>

//tao ham de tim kiem phan tu trong mang
int timkiemphantu(int *arr, int size, int value) {
	int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; // tra ve vi tri khi tim thay
        }
    }
    return -1;  //tra ve vi tri khi khong tim thay
}

int main() {
    // khai bao va gan gia tri cho mang
    int number[] = {10, 20, 30, 40, 50};
    //tinh so phan tu trong mang
    int size = sizeof(number) / sizeof(number[0]);

    //gia tri can tim
    int giatricantim = 30;

    // goi ham tim kiem va luu ket qua 
    int position = timkiemphantu(number, size, giatricantim);

    // in ket qua
    if (position != -1) {
        printf("Phan tu %d duoc tim thay o vi tri: %d\n", giatricantim, position);
    } else {
        printf("Khong tim thay phan tu %d trong mang\n", giatricantim);
    }
// ket thuc chuong trinh
    return 0;
}

