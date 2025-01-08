#include <stdio.h>

void tong(int *a,int *b,int *sum){
	*sum = *a + *b;
}

void inTong(int *sum){
	printf("Tong cua X + Y = %d",*sum);
}

int main (){
	int a=55,b=90;
	int sum;
	tong (&a,&b,&sum);
	inTong(&sum);
}
