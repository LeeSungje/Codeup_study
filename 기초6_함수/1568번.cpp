#include <stdio.h>

int n, a, b, d[1010];

int maxi(int k, int l){
	
	int max = d[k];
	int result = k;
	
	for(int i=k ; i<=l; i++){
		if(d[i] > max){
			max = d[i];
			result = i;
		}
	}
	
	return result;

}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
	 scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}
