#include<stdio.h>

int main(){
	
	int n,g,i,j,min,k;
	
	int arr1[101]={};
	int arr2[101]={};
	
	scanf("%d %d" , &n, &g);
	
	for(i=0; i<n; i++){
		scanf("%d", &arr1[i]);
	}
	
	for(i=0, k=0; i<n; i=i+g, k++){
		min = arr1[i];
		for(j=1; j<g; j++){
			if(i+j >= n){		//3개씩 묶음인데 배열 총 크기가 5면 5번째 값까지만 돌려야 하므로...6번째 값인 arr1[5]가 되면 나가야함. 
				break;	
			}
			else if(arr1[i+j] < min){
				min = arr1[i+j];
			}
		}
		arr2[k]=min;
	}
	
	for(i=0; i<k; i++){
		printf("%d ", arr2[i]);
	}
	
	return 0;
}
