#include <stdio.h>

long long int n;

long long int f(long long int num){
	
	long long int q,r;  //��� ������ 
	int k = 0;    
	long long int sum=0;
	
	q = num; 
	while(q != 0){
		q = q/10;
		k++;		//���ڸ��� ���� ���� 
	}
	
	q=num;
	
	while(q != 0){
		r = q % 10;
		
		for(int i=k-1; i>0; i--){
			r=r*10;
		}
		
		sum += r;
		q = q/10;
		k--;
	}
	
	return sum;
	
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
