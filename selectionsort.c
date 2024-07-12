// Selection sort
#include <stdio.h>

void selectionSort(int a[], int n){
	int i, j, min_idx, tmp;

	// Sposta uno alla volta il confine del sottoarray non ordinato
	for (i = 0; i < n-1; i++){
		// trova il minimo elemento dell' array
		min_idx = i;
		for (j = i+1; j < n; j++){
			if (a[j] < a[min_idx]){
				min_idx = j;
			}
		}

		// cambia il primo elemento con il minimo elemento trovato
		if(min_idx != i){
			tmp = a[min_idx];
            a[min_idx] = a[i];
            a[i] = tmp;
	    }
    }
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	printf("Array ordinato: \n");
	printArray(arr, n);
	return 0;
}
