#include<stdio.h>

typedef struct Student{
	int num; 
	int math;
	int com;
	
}Student;

Student stu[1002];

int main(){
	
	int n,i,j;
	Student temp;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d %d", &stu[i].math, &stu[i].com);
		stu[i].num = i;
	}
	
	for(i=2 ; i<=n; i++){	//삽입정렬 (내림차순)
		temp = stu[i];
		for(j=i-1; j>0 && stu[j].math <= temp.math; j--){
			if((stu[j].math == temp.math) && (stu[j].com >= temp.com))
				break;
				
			stu[j+1] = stu[j];
		}
		stu[j+1] = temp;
	}
	
	for(i=1; i<=n; i++){
		printf("%d %d %d\n", stu[i].num, stu[i].math, stu[i].com);
	}
	
	return 0;
}
