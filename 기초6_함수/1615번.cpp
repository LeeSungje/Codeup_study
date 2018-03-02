#include<stdio.h>

int arr[5001];

int generator(int n){

	int selfNum = n;
	
	while(n){
		selfNum += n%10;	//�̷��� �����ѹ��� ��������� ���� �迭��ġ���� 0���� ����� ������ ������ 
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
	
	for(int i=1; i<=b; i++){ 	//1�����ΰ� ���� 
		x = generator(i); 
		if(a <= x && x <= b)
			arr[x] = 0;		
	}
	
	for(int i=a; i<=b; i++){
		sum += arr[i];			//������ �����ִ� �ֵ鸸 ���ϰ� �� 
	}
	
	printf("%d", sum);
	
	return 0; 
}
