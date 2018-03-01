#include <stdio.h>

int n, d[100010], k;

int f(int num){
	
	int i; 
	
	for(i=1; i<=n; i++){
		if(num == d[i])
			break;
	}
    
    if(i == n+1) 
		i=-1;
    
    return i;
	
}


int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}
