#include <stdio.h>

int a, n;

long long int pow(int aa, int nn){
	
	long long int result=1;
	
	if(aa == 1)		//�̰� �����ָ� �ð��ʰ�! 1�� �ƹ��� �ŵ������ص� 1��!! 
		return 1;
		
	for(int i=1; i<=n; i++)	
		result *= aa;
	
	return result; 
}

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}
