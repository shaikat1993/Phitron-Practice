//
//  main.c
//  Problem2-SwapArrayElement(PassByReference)
//
//  Created by Sadidur  on 1/12/22.
//

#include <stdio.h>
void bubbleSort(int array[], int size);
void swap(int* first, int* second);
int main() {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &input[i]);
    }
    bubbleSort(input,n);
    // sorted array using pass by reference
    for (int i=0; i<n; i++) {
        printf("%d ", input[i]);
    }
    return 0;
}

void bubbleSort(int array[], int size) {
    int pass;
    for (pass = 0; pass<size-1; pass++) {
        for (int i = 0; i<size-1; i++) {
            if (array[i] > array[i+1]) {
                swap(&array[i], &array[i+1]);
            }
        }
    }
}
// pass by reference
void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}
