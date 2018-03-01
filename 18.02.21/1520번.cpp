#include<stdio.h>

int main(){
	
	int i, j, k,l, count, a,b, x,y,z, h;
	int arr[172][172]={};
	int arr2[172][172]={};
	
	scanf("%d %d", &a, &b);
	scanf("%d %d %d", &x, &y, &z);
	
	for(i=1; i<=a; i++){			//애초에 (1,1)부터 시작하게 함. 주변 8개를 봐야하므로!!!!!!!!! 
		for(j=1; j<=b; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	scanf("%d", &h);	
	
	while(h--){				//h세대 만큼 지난 후여야 하니깐 
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
							count += arr[i+k][j+l];	// 자기 자신도 1이므로 count 될것 
						}
					}
					if(count >= z+1 || count < y+1 ){		//따라서 1씩 더 더해줬음 
						arr2[i][j] = 0;
					}
					else{
						arr2[i][j] = 1;
					}
				}
			}	
		}
		
		for(i=1; i<=a; i++){
			for(j=1; j<=b; j++){				// 바뀐 값을 가진 배열을 원래 배열에 복사(h번 반복하기 위해서) 
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
