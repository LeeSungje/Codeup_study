#include <stdio.h>

int n, k, d[1010];

int lower_bound(int num){
	
	if(num > d[n])
		return n+1;
		
	for(int i=1; i<=n; i++){
		if(num <= d[i])
			return i;
	}
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", lower_bound(k));
}


