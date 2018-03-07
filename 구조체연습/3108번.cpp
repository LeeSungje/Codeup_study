#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node{
	int no;
	char s[11];
	struct _node* next;
}node;


typedef struct _list{
	int count;
	node* head;
}list;

void init(list* lptr){
	//initialize the list
	lptr->head=NULL;
}

void insert(list* lptr, int num, char s[]){
	//insert value to proper position
	
	node* new_nptr=(node*)malloc(sizeof(node));
	new_nptr->no = num;
	strcpy(new_nptr->s , s);

	if(lptr->head == NULL){		//ó������ ��带 �߰��ϴ� ��� 
		new_nptr->next = lptr->head;
		lptr->head = new_nptr;
	}
	
	else{
		node* tmp = lptr->head;
		node* prev = NULL;
		
		int count=0;
		
		while(tmp!=NULL  &&  num>(tmp->no)){
				prev = tmp;
				tmp = tmp->next;
				count++;	
		}
				
		if(tmp!=NULL && num == tmp->no) return;  //�̹� �ִ� �����̸� �߰� �Ƚ�Ű����! 
		
		if(count==0){				//ù��° ���� ���� �Ǹ� head�� �� ���� �Űܾ� �ϱ� ������ 
			lptr->head = new_nptr;
			new_nptr->next = tmp;
		}
				
		else{
			new_nptr->next=prev->next;
			prev->next=new_nptr;
		}
	}
}

void deletes(list* lptr, int num){
	
	node* tmp = lptr->head;
	node* prev = NULL;
	
	int count=0;
	
	while(tmp!=NULL && (tmp->no)!=num){
		prev = tmp;
		tmp = tmp->next;
		count++;
	}
	
	if(tmp == NULL)	 return; //ã�ƺôµ� ���� ��ȣ�̸� �׳� ����������
	
	if(count == 0){		//ó�� ��� ��尡 �����Ϸ��� ���̶�� 
		lptr->head = tmp->next;
		tmp = NULL;
	}
	
	else{			//�߰��̳� ����忴�ٸ�  
		prev->next = tmp->next;
		tmp = NULL;
	}
	
}

void print_list(list* lptr, int x){
	node* tmp = lptr->head;
	
	while(--x){
		tmp=tmp->next;
	}
	printf("%d %s\n",tmp->no, tmp->s);
}

int main(){
	
	int n,m[7], i, num;
	char c[2], s[11];
			
	list* mylist=(list*)malloc(sizeof(list));
	init(mylist);

	scanf("%d", &n);
		
	for(i=1; i<=n; i++){
		scanf("%s %d %s", c, &num, s);
		
		if(!strcmp(c,"I"))  //strcmp�� �� ���� ������ ������ 0�� ��ȯ�ϱ� ������ ! �ٿ��� 
			insert(mylist, num, s);
		else if(!strcmp(c,"D"))
			deletes(mylist, num);
	}

	for(i=1; i<=5; i++){
		scanf("%d", &m[i]);
	}
	
	for(i=1; i<=5; i++)
		print_list(mylist, m[i]);

	
	return 0;
}
