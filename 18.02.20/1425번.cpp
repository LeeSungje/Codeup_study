#include<stdio.h>

int main(){
	
	int n,c,i,j, k;
	int a[100]={};

	scanf("%d %d", &n, &c);
		
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for (i = 1; i < n; i++) {
        k = a[i];
        for (j = i - 1; j >= 0 && a[j] > k; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = k;
    }

	
	for(i=0; i<n; i++){
		if(i!=0 && i%c==0){
			printf("\n");
		}
		printf("%d ", a[i]);
		
	}
	return 0;
}
