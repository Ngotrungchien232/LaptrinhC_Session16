#include<stdio.h>
// xay dung ham de khai bao hai bien
void swap(int *pa, int *pb){
	//tao bien trung gian de doi vi tri cua bien a va b
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
//xay dung ham de hien thi ra ket qua sau khi da doi
void prt(a, b){
	printf("gia tri cua a la: %d\n", a);
	printf("gia tri cua b la: %d\n", b);
}
int main(){
	int a;
	int b;
	printf("moi ban nhap gia tri cho a: \n");
	scanf("%d", &a);
	printf("moi ban nhap gia tri cho b: \n");
	scanf("%d", &b);
	swap(&a, &b);
	prt(a, b);
	
}
