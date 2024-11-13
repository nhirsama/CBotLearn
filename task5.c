//
// Created by nhirsama on 24-11-12.
//
#include <stdio.h>
#include <string.h>
char input[55];
int main() {
    scanf("%s", input);
    for (int i = strlen(input)-1; i >= 0 ; i--) {
        if (input[i] == 'U' || input[i] == 'P' || input[i] == 'R' || input[i] == 'E' || input[i] == '0' ) {
            continue;
        }
        printf("%c", input[i]);
    }
    return 0;
}