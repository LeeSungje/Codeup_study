#include<stdio.h>

void myswap(int* a, int* b){
	int temp;
	
	if(*a > *b){
		temp = *a;
		*a = *b;
		*b=temp;	
	}
} 


int main(void){
	
	int x, y;
	
	scanf("%d%d", &x, &y);
	
	myswap(&x,&y);
	
	printf("%d %d", x,y);
	
	return 0; 
}
