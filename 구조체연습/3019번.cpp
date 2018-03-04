#include<stdio.h>
#include<string.h>

typedef struct Schedule{
	
	char s[100];
	int year, month, day;
	
}Schedule;

Schedule sche[101];

int main(){
	
	int n, i, j;
	Schedule temp; 
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%s %d %d %d", &sche[i].s, &sche[i].year, &sche[i].month, &sche[i].day);
	}
	
	for(i=2 ; i<=n; i++){	//삽입정렬 (오름차순)
		temp = sche[i];
		for(j=i-1; j>0 && sche[j].year >= temp.year; j--){
			if((sche[j].year == temp.year) && (sche[j].month < temp.month))
				break;
			
			if((sche[j].year == temp.year) && (sche[j].month == temp.month) && (sche[j].day < temp.day))
				break;
				
			if((sche[j].year == temp.year) && (sche[j].month == temp.month) && (sche[j].day == temp.day) && (strcmp(sche[j].s , temp.s) < 0))
				break;
			
			sche[j+1] = sche[j];
		}
		sche[j+1] = temp;
	}
	
	for(i=1; i<=n; i++){
		printf("%s\n", sche[i].s);	
	}
	
	return 0;
	
}
