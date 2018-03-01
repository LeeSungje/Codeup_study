#include<stdio.h>

void QuickSort(int arr[], int left, int right){
	
	int L=left, R=right;
	int temp;
	int pivot = arr[(left+right)/2];
	
	while(L <= R){
		
		while(arr[L] < pivot)
			L++;
		
		while(arr[R] > pivot)
			R--;
		
		
		if(L<=R){
			if(L!=R){
				temp = arr[R];
				arr[R] = arr[L];
				arr[L] = temp;
			}
					
			L++;
			R--;
		}
	}
	
	if(left < R)
		QuickSort(arr, left, R);
		
	if(L < right)
		QuickSort(arr, L, right);

} 


int a[50001] = {};
int b[5000001] = {};
int c[50001] = {};


int main(){
	

	int i,j, n, m;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		b[a[i]] = i;
	}
	
	QuickSort(a, 0, n-1);
	
	for(i=0; i<n; i++){
		c[b[a[i]]] = i;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", c[i]);
	}
	
	
	return 0;
}
