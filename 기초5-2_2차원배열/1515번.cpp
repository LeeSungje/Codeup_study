#include<stdio.h>

int main(){
	
	int i, j, k,l, count=0;
	int arr[26][26]={};
	int arr2[26][26]={};
	
	for(i=0; i<25; i++){
		for(j=0; j<25; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	
	for(i=0; i<25; i++){
		for(j=0; j<25; j++){
			if(arr[i][j]==0){
				count=0;
				for(k=-1; k<2; k++){
					if(i+k < 0 || i+k >=25) continue;  //�迭 ���� ������ ������ �ؿ� for�� �ȵ�����. 
					for(l=-1; l<2; l++){
						if(j+l< 0 || j+l >=25) continue;	
						else if(arr[i+k][j+l] == 1) count++;
					}
				}
				if(count == 3){
					arr2[i][j] = 1;
				}
				else{
					arr2[i][j] = 0;
				}
			}
			
			else if(arr[i][j]==1){
				count=0;
				for(k=-1; k<2; k++){
					if(i+k < 0 || i+k >=25) continue;  //�迭 ���� ������ ������ �ؿ� for�� �ȵ�����. 
					for(l=-1; l<2; l++){
						if(j+l< 0 || j+l >=25) continue;	
						else if(arr[i+k][j+l] == 1) count++;	// �ڱ� �ڽŵ� 1�̹Ƿ� count �ɰ� 
					}
				}
				if(count >= 5 || count <= 2 ){		//���� 1�� �� �������� 
					arr2[i][j] = 0;
				}
				else{
					arr2[i][j] = 1;
				}
			}
		}	
	}
	
	
	for(i=0; i<25; i++){
		for(j=0; j<25; j++){
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
