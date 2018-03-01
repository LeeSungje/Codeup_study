#include <stdio.h>

int n;

#include<stdbool.h>

bool zero(int num){
	
	bool k = bool(num);
		
	return !k; 
	
}

int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero\n");
  else printf("non zero\n");
}
