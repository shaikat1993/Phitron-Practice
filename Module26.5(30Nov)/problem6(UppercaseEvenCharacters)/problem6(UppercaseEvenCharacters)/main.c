//
//  main.c
//  problem6(UppercaseEvenCharacters)
//
//  Created by Sadidur  on 1/12/22.
//

#include <stdio.h>
#include <string.h>

void uppercaseEvenCharacters(char strings[]);

int main() {
    char strings[100];
    fgets(strings, sizeof(strings), stdin);
    uppercaseEvenCharacters(strings);
    return 0;
}

void uppercaseEvenCharacters(char strings[]) {
    for (int i = 0; i<strlen(strings); i++) {
        if (strings[i] >= 'a' &&
            strings[i] <= 'z') {
            if (strings[i] % 2 == 0) {
                strings[i] = strings[i] - 32;
            }
        }
    }
    puts(strings);
}

