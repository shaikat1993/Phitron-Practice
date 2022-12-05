//
//  main.c
//  Problem3(PrintArrayUsingPointers)
//
//  Created by Sadidur  on 1/12/22.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i<n; i++) {
        scanf("%d", input+i);
    }
    
    for (int i = 0; i<n; i++) {
        printf("%d ", *(input+i));
    }
    return 0;
}
