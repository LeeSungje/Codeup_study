#include <iostream>
using namespace std;

int main(){
	
	int arr[4]={};
	int i,j,temp;
	
	for(i=1; i<=3; i++){
		cin >> arr[i];
	}
	
	for(i=2; i<=3; i++){
		temp = arr[i];
		for(j=i-1; j>=1 && arr[j]>temp; j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = temp;
	}
	
	cout << arr[1];
	
	return 0;
}
