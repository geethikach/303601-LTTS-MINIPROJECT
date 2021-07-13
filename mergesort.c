#include"prototypes.h"

void merge(int arr[], int offset, int mid, int size) {
	int n1 = mid - offset + 1;
	int n2 = size - mid;
	int* l = (int*)calloc(n1 + 1, sizeof(int));
	int* r = (int*)calloc(n2 + 1, sizeof(int));
	int i, j, k;
	for(i = 0; i < n1; i++) {
		*(l + i) = arr[offset + i];
	}
	for(j = 0; j < n2; j++) {
		*(r + j) = arr[mid + j + 1];
	}
	*(l + n1) = 32767;
	*(r + n2) = 32767;
	i = j = 0;
	for(k = offset; k <= size; k++) {
		if(*(l + i) <= *(r + j)) {
			arr[k] = *(l + i);
			i++;
		}
		else {
			arr[k] = *(r + j);
			j++;
		}
	}
	free(l);
	free(r);
}

void mergeSort(int arr[], int offset, int size) {
	if (offset < size) {
		int mid = (offset + size) / 2;
		mergeSort(arr, offset, mid);
		mergeSort(arr, mid + 1, size);
		merge(arr, offset, mid, size);
	}
}