#include"prototypes.h"

int partition(int arr[], int offset, int size) {
	int x = arr[size];
	int i = offset - 1;
	int j;
	int temp;
	for(j = offset; j < size; j++) {
		if (arr[j] <= x) {
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[size];
	arr[size] = temp;
	return i + 1;
}

void quickSort(int arr[], int offset, int size) {
	int pivot;
	if (offset < size) {
		pivot = partition(arr, offset, size);
		quickSort(arr, offset, pivot - 1);
		quickSort(arr, pivot + 1, size);
	}
}