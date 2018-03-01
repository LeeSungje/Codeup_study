#include<stdio.h>
#include<stdlib.h>

int a[10000000]={};

int main(){
	
	int n, m, i, x, y;
	

	scanf("%d" , &n);

	for(i=0; i<n; i++){
		scanf("%d" , &x);
		a[x]=1;
	}
	
	scanf("%d", &m);

	for(i=0; i<m; i++){
		scanf("%d" , &y);
		printf("%d ", a[y]);
	}	
	
	return 0;
}


