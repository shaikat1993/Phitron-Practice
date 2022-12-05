//
//  main.c
//  Problem4(AreaOfCircleUsingFunction)
//
//  Created by Sadidur  on 1/12/22.
//

#include <stdio.h>

float getArea(int radius);

int main() {
    int radius;
    scanf("%d", &radius);
    float area = getArea(radius);
    printf("%f\n", area);
    return 0;
}

float getArea(int radius) {
    return (float) (3.1416 * radius * radius);
}
