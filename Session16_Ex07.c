#include<stdio.h>
	// tao ham sap xep theo thuat toan bubble sort
	void sapxep(int *arr, int size){
		int i, j;
		for(i = 0; i < size - 1 ; i++){
			for(j = 0; j < size - 1 - i; j++){
				if(arr[j] > arr[j + 1]){
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
	// tao ham in ra cac phan tu co trong mang
	void incacphantu(int *arr, int size){
		printf("mang sau khi duoc sap xep la: \n");
		int i;
		for(i = 0; i < size; i++){
			printf("number[%d]\n", arr[i]);
		}
			printf("\n");
	}
	
int main(){
	// khai bao va gan gia tri cho mang 
	int number[] = {3, 7, 8, 3, 0};
	// tinh kich thuoc cua mang 
	int size = sizeof(number) / sizeof(number[0]);
	//in mang truoc khi sap xep
	printf("mang truoc khi sap xep la: \n");
	incacphantu(number, size);
	// sau do goi ham sap xep 
	sapxep(number, size);
	//sau do in ket qua da sap xep
	incacphantu(number, size);
	//ket thuc chuong trinh 
	return 0;
	
	
}
