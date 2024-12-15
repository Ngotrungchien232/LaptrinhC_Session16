#include<stdio.h>
//viet ham de co the khai bao gia tri cho ham
	void Vlaue(int a){
		a = 10;
	}
int main(){
	int a;
	Vlaue(a);
	int *p;
	p = &a;
	//cach thu nhat de co the in ra gia tri va dia chi cua a 
	printf("cach thu nhat la\n");
	printf("dia chi cua a la: %x\n", &a);
	printf("gia tri cua a la: %d\n", a);
	//cach thu hai de co the in ra dia chi va gia tri cua a 
	printf("cach thu hai la\n");
	printf("dia chi cua a la: %x\n", p);
	printf("gia tri cua a la: %d\n", *p);
	
}
