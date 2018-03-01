#include<stdio.h>
#include<stdlib.h>

void QuickSort(int arr[], int left, int right) {

	int L = left, R = right;
	int pivot = arr[(left + right) / 2];
	int temp;

	while (L <= R) {
		while (arr[L] < pivot)
			L++;
		while (arr[R] > pivot)
			R--;

		if (L <= R) {
			if (L != R) {
				temp = arr[R];
				arr[R] = arr[L];
				arr[L] = temp;
			}
			L++;
			R--;
		}
	}

	if (left < R)
		QuickSort(arr, left, R);
	if (right > L)
		QuickSort(arr, L, right);
}

int a[4500001];

int main() {

	int n, i;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	QuickSort(a, 0, n - 1);

	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

	return 0;
}