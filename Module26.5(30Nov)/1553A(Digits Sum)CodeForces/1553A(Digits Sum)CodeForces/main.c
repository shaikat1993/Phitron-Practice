//
//  main.c
//  1553A(Digits Sum)CodeForces
//
//  Created by Sadidur  on 6/12/22.
//

#include <stdio.h>

void checkDigitSum(int n);

int main() {
    int testcase;
    scanf("%d",&testcase);
    int n;
    while (testcase--) {
        scanf("%d", &n);
        checkDigitSum(n);
    }
    return 0;
}

void checkDigitSum(int n) {
    printf("%d\n", (n+1) / 10);
}

