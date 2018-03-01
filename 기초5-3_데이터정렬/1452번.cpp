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

int main(){
	
	int a[100001] = {};
	
	int i,j, n, m;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);	
	}
	
	QuickSort(a, 0, n-1);
	
	for(i=0; i<n; i++){
		printf("%d\n", a[i]);
	}
	
	return 0;
}
