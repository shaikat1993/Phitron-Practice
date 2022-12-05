//
//  main.c
//  problem1(AvgOfTwoValue)
//
//  Created by Sadidur  on 1/12/22.
//

#include <stdio.h>

float getAverage(int* first, int* second);

int main() {
    int firstVal, seccondVal;
    scanf("%d %d", &firstVal, &seccondVal);
    int* firstp;
    int* secondp;
    
    firstp = &firstVal;
    secondp = &seccondVal;
    
    float average = getAverage(firstp, secondp);
    printf("%.2f\n", average);
    return 0;
}

float getAverage(int* first, int* second) {
    return (float) ((*first + *second)/2.0);
}
