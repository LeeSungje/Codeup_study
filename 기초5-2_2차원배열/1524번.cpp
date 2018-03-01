#include<stdio.h>

int a[20][20]={};
int b[20][20]={}; // 바뀌는 값을 넣어줄 것임 
int c[11]={};

int main(){
	
	int i,j, player, x,y, k, l;
	
	
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			scanf("%d", &a[i][j]);
			b[i][j] = a[i][j];
		}
		c[i] = 0;
	}
	
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			if(a[i][j] >= 1){
				for(k=0; k<=a[i][j]; k++){		//한번만 원래 자기자신도 -2로 바꾸게 함. 
					if(a[i-k][j] == -1)	{      //장애물 만나면 -2로 그만 바꾸고 for문 나가기 
						break;
					}
					b[i-k][j] = -2;
				}
				for(k=1; k<=a[i][j]; k++){
					if(a[i+k][j] == -1)	break; //장애물 만나면 -2로 그만 바꾸고 for문 나가기 
					b[i+k][j] = -2;
				}
				for(k=1; k<=a[i][j]; k++){
					if(a[i][j-k] == -1)	break; //장애물 만나면 -2로 그만 바꾸고 for문 나가기 
					b[i][j-k] = -2;
				}
				for(k=1; k<=a[i][j]; k++){
					if(a[i][j+k] == -1)	break; //장애물 만나면 -2로 그만 바꾸고 for문 나가기 
					b[i][j+k] = -2;
				}
			}
		}
	}
	
	
	scanf("%d", &player);
	
	
	for(l=1; l<=player; l++){
		scanf("%d %d", &x, &y);
		if(b[x][y] == -2){
			c[l] = 0;	//0은 죽었다는 뜻 
		}
		else if(b[x][y] == 0){
			c[l] = 1;		// 1은 살았다는 뜻 
			b[x][y] = l;
		}
	}
	
	
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	printf("Character Information");
	
	for(l=1; l<=player; l++){
		if(c[l] == 0){
			printf("\nplayer %d dead", l);
		}
		else{
			printf("\nplayer %d survive", l);
		}
	}
	
	return 0;
	
} 
