#include<stdio.h>
#include<stdlib.h>

int arr[1001][1001]={};

int main(){
	
	int n, m, k, i, j;
	int x1, y1, x2, y2, u;
	
	scanf("%d %d %d" , &n, &m, &k);
	
	for(i=0; i<k; i++){
		scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);
		arr[x1][y1] = arr[x1][y1]+u;
		arr[x2+1][y2+1] = arr[x2+1][y2+1]+u;
		
		arr[x1][y2+1] = arr[x1][y2+1]-u;
		arr[x2+1][y1] = arr[x2+1][y1]-u;
	}

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++){
		for(j=1; j<m; j++){
			arr[i][j] = arr[i][j]+ arr[i][j-1];
		}
	}
	
	for(i=0; i<m; i++){
		for(j=1; j<n; j++){
			arr[j][i] = arr[j][i]+ arr[j-1][i];
		}
	}
	
	printf("\n");
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}		
		
	
	return 0;
}


