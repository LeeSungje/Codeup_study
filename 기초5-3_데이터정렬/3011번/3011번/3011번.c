#include<stdio.h>

int a[1001];

int main() {

	int n, i, j, temp, count, result;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i++) {	//끝은 굳이 안가도 되니 n-1로 했음 
		count = 0;

		for (j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
				count++;
			}
		}

		if (count == 0)
			break;
	}

	result = i; //어차피 i가 1더해져 나오니깐 그냥 i로 해야됨

	printf("%d", result);

	return 0;
}