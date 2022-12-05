//
//  main.c
//  1681B(Card Trick)Codeforces
//
//  Created by Sadidur  on 6/12/22.
//

#include <stdio.h>

int shuffle(int array[],int size);

int main() {
    int testcase;
    scanf("%d", &testcase);
    
    while (testcase--) {
        int n;
        scanf("%d",&n);
        int input[n];
        for (int i = 0; i<n; i++) {
            scanf("%d",&input[i]);
        }
        printf("%d\n", shuffle(input,n));
    }
    return 0;
}

int shuffle(int array[],int size) {
    int m;
    scanf("%d", &m);
    
    int sum = 0, temp;
    for (int i = 0; i<m; i++) {
        scanf("%d",&temp);
        sum = (sum + temp) % size;
    }
    return array[sum];
}


