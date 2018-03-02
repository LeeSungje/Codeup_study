#include<stdio.h>

double ABS(double x){
	
	if(x < 0)
		x = -1*x;
		
	return x;
} 


int main(void){
	
	double n;
	
	scanf("%lf", &n);
	
	printf("%.10g", ABS(n));
	
	return 0; 
}
