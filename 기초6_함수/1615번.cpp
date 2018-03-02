#include<stdio.h>

int arr[5001];

int generator(int n){

	int selfNum = n;
	
	while(n){
		selfNum += n%10;	//이렇게 셀프넘버가 만들어지는 애의 배열위치값을 0으로 만들어 전구를 꺼버림 
		n /= 10;
	}
	
	return selfNum;
} 


int main(void){
	
	int a, b;
	int x;
	int sum=0;
	
	scanf("%d %d", &a, &b);
	
	for(int i=a; i<=b; i++)
		arr[i] = i; 
	
	for(int i=1; i<=b; i++){ 	//1부터인것 유의 
		x = generator(i); 
		if(a <= x && x <= b)
			arr[x] = 0;		
	}
	
	for(int i=a; i<=b; i++){
		sum += arr[i];			//전구가 켜져있는 애들만 더하게 됨 
	}
	
	printf("%d", sum);
	
	return 0; 
}
