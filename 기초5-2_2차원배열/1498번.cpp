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
			if(i+j >= n){		//3���� �����ε� �迭 �� ũ�Ⱑ 5�� 5��° �������� ������ �ϹǷ�...6��° ���� arr1[5]�� �Ǹ� ��������. 
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
