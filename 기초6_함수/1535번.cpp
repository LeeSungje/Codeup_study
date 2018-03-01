#include <stdio.h>

int n, d[110];


int f(){
	int i, max, result=0;
	
	max=d[0];
	for(i=1; i<n; i++){
		if(d[i] > max){
			max = d[i];
			result = i;
		}
	}
	
	return result+1;
}


int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d\n", f());
  return 0;
}
