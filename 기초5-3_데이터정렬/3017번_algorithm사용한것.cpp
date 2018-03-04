#include<stdio.h>
#include<algorithm>


typedef struct Student{
	int math;
	int com;
	
}Student;

bool compare(Student a, Student b){
	if(a.math == b.math){
		return a.com > b.com;			//수학 성적 같으면 정보 성적으로 내림차순하기  
	}
	
	return a.math > b.math;  //내림차순 
}

Student stu[1002];

int main(){
	
	int n,i;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d %d", &stu[i].math, &stu[i].com);
	}
	
	std::sort(stu+1, stu+n+1, compare); //더하기 1 해줄 것!
	
	for(i=1; i<=n; i++){
		printf("%d %d %d\n", i, stu[i].math, stu[i].com);
	}
	
	return 0;
}
