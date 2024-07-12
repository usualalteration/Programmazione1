// Insertion sort
#include <math.h>
#include <stdio.h>

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void insertionSort(int arr[], int n){
	int i, key, j;
	for (i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;

		/* Sposta avanti gli elementi di arr[0..i-1], che sono più grandi della chiave*/
		while (j >= 0 && arr[j] > key){
            //printArray(arr,n);
            //printf("i= %d  j= %d  key=%d\n", i,j,key);
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[] = { 5,4,3,2,1};
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
