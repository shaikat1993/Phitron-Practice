//
//  main.c
//  1734A(Select Three Sticks)CodeForces
//
//  Created by Sadidur  on 6/12/22.
//

#include <stdio.h>

void bubbleSortArray(int array[], int size);
int minOperation(int array[], int size);

int main() {
    int testcase;
    scanf("%d",&testcase);
    while (testcase--) {
        int n;
        scanf("%d",&n);
        int input[n];
        
        for (int i = 0; i<n; i++) {
            scanf("%d",&input[i]);
        }
        
        bubbleSortArray(input, n);
        printf("%d\n", minOperation(input, n));
    }
    return 0;
}

void bubbleSortArray(int array[], int size) {
    for (int i = 0; i<size; i++) {
        for (int j = i; j<size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int minOperation(int array[], int size) { 
    int sum = array[2] - array[0];
    for (int i = 0; i<size-2; i++) {
        if ((array[i+2] - array[i]) < sum ) {
            sum = (array[i+2] - array[i]);
        }
    }
    return sum;
}
