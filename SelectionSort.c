// C Program for SelectionSort
#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n){
    int i, j, min_index;

    // Loop that moves min index of unsorted array
    // into the sorted array
    for (i = 0; i < n - 1; i++){
        // Find mix element
        min_index = i;
        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[min_index])
                min_index = j;
        }

        // Swap elements
        swap(&arr[min_index], &arr[i]);
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);;
    selectionSort(arr, n);
    printf("Sorted array: \n"); 
    printArray(arr, n); 

    return 0;
}
