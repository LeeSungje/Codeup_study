#include<stdio.h>

int main(){
	
	int i,j;
	
	for(i=1; i<=9; i++){
		for(j=2; j<=5; j++){
			if(j==5){
				printf("%d x %d = %2d\n", j, i, j*i);
				continue;
			} 
			printf("%d x %d = %2d\t", j, i, j*i);
		}
	}
	
	return 0;
}
