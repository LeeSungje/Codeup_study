#include<stdio.h>

int main(){
	
	int i, j, k,l, count, a,b, x,y,z, h;
	int arr[172][172]={};
	int arr2[172][172]={};
	
	scanf("%d %d", &a, &b);
	scanf("%d %d %d", &x, &y, &z);
	
	for(i=1; i<=a; i++){			//���ʿ� (1,1)���� �����ϰ� ��. �ֺ� 8���� �����ϹǷ�!!!!!!!!! 
		for(j=1; j<=b; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	scanf("%d", &h);	
	
	while(h--){				//h���� ��ŭ ���� �Ŀ��� �ϴϱ� 
		for(i=1; i<=a; i++){
			for(j=1; j<=b; j++){
				if(arr[i][j]==0){
					count=0;
					for(k=-1; k<2; k++){ 
						for(l=-1; l<2; l++){
							count += arr[i+k][j+l];
						}
					}
					if(count == x){
						arr2[i][j] = 1;
					}
					else{
						arr2[i][j] = 0;
					}
				}
				
				else if(arr[i][j]==1){
					count=0;
					for(k=-1; k<2; k++){
						for(l=-1; l<2; l++){
							count += arr[i+k][j+l];	// �ڱ� �ڽŵ� 1�̹Ƿ� count �ɰ� 
						}
					}
					if(count >= z+1 || count < y+1 ){		//���� 1�� �� �������� 
						arr2[i][j] = 0;
					}
					else{
						arr2[i][j] = 1;
					}
				}
			}	
		}
		
		for(i=1; i<=a; i++){
			for(j=1; j<=b; j++){				// �ٲ� ���� ���� �迭�� ���� �迭�� ����(h�� �ݺ��ϱ� ���ؼ�) 
				arr[i][j] = arr2[i][j];
			}
		}
	}
	
	for(i=1; i<=a; i++){
		for(j=1; j<=b; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
