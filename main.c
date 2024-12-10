#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonksiyon Prototipleri
void insertionSort(int arr[], int n);
void printArray(int arr[], int size);

int main() {
    int i, N;
    printf("INSERTION SORT ALGORITMASI\n");
    printf("Kac adet sayi uretilecek: ");
    scanf("%d", &N);
    int *arr = (int *)malloc(N * sizeof(int));
    srand(time(0));
    printf("Dizi Elemanlari: ");
    for (i = 0; i < N; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    insertionSort(arr, N);
    printf("\nSiralanmis Dizi Elemanlari: ");
    printArray(arr, N);
    free(arr);
    return 0;
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
