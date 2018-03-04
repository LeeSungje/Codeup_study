#include<stdio.h>

typedef struct Student{
	
	char name[11];
	int score;
	
}Student;

Student stu[102];

int main(){
	
	int n, m, i, j;
	Student temp;
	
	scanf("%d %d", &n, &m);
	
	for(i=1 ; i<=n ; i++){
		scanf("%s %d", &stu[i].name, &stu[i].score);
	}

	for(i=2 ; i<=n; i++){	//삽입정렬 (내림차순)
		temp = stu[i];
		for(j=i-1; j>0 && stu[j].score < temp.score; j--){
			stu[j+1] = stu[j];
		}
		stu[j+1] = temp;
	}
	
	for(i=1 ; i<=m ; i++){
		printf("%s\n", stu[i].name);
	}
	
	return 0;
}
