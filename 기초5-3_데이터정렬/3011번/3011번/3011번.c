#include<stdio.h>

int a[1001];

int main() {

	int n, i, j, temp, count, result;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i++) {	//���� ���� �Ȱ��� �Ǵ� n-1�� ���� 
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

	result = i; //������ i�� 1������ �����ϱ� �׳� i�� �ؾߵ�

	printf("%d", result);

	return 0;
}