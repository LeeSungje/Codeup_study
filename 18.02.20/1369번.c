#include<stdio.h>

int main(){
	
	int n,k,i,j;
	
	scanf("%d %d", &n, &k);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i==1 || i==n || j==1 || j==n){
				printf("*");
			}
			else if ((i+j-1)%k == 0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
