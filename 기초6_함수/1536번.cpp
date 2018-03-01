#include <stdio.h>

int n;

long long int d[110];

long long int f(){
	int i;
	long long int min;
	
	min=d[1];
	
	for(i=2; i<=n; i++){
		if(min > d[i])
			min = d[i];
	}
	
	return min;
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld\n", f());
  return 0;
}
