#include<stdio.h>
	// viet ham de tinh tong gia tri hai bien
	int sum(int *pa, int *pb){
		int tong = *pa + *pb;
		return tong;
	}
int main(){
	//khai bao va gan gia tri cho bien
	int a, b;
	printf("moi ban nhap gia tri cho a: \n");
	scanf("%d", &a);
	printf("moi ban nhap gia tri cho b: \n");
	scanf("%d", &b);
	//tao bien de luu ket qua 
	int ketqua;
	ketqua = sum(&a, &b);
	//in ket qua de kiem tra
	printf("tong cua %d va %d la %d", a, b, ketqua);
	//ket qua
	return 0;
	
}
