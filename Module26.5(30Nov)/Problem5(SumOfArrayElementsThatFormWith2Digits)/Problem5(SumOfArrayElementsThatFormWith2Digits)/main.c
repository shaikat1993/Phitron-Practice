//
//  main.c
//  Problem5(SumOfArrayElementsThatFormWith2Digits)
//
//  Created by Sadidur  on 1/12/22.
//

#include <stdio.h>

void sumOfArrElement(int array[], int size);

int main() {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i<n; i++) {
        scanf("%d", &input[i]);
    }
    sumOfArrElement(input, n);
    return 0;
}

void sumOfArrElement(int array[], int size) {
    int sum = 0;
    for (int i = 0; i<size; i++) {
        if (array[i] > 9 && array[i] % 10 == 0){
            sum += array[i];
        }
    }
    printf("%d\n", sum);
}
