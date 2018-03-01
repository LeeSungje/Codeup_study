#include <stdio.h>

int a, b;

int gcd(int p, int q){ 	//�ִ����� ���ϴ� �Լ� 

	if(p==0) return q; 
	
	return gcd(q%p, p);

}

long long int lcd(int p, int q){
	
	int n = gcd(p, q);	//�ϴ� �ִ������� ���� 
	
	long long int r1 = p/n;
	long long int r2 = q/n;

	return r1*r2*n;
	
}

int main()
{
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcd(a, b));
}
