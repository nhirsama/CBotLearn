//
// Created by nhirsama on 24-11-13.
//
#include <stdio.h>
int main() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j <= i ; j++) {
            if (i == j) {}
            printf("%d*%d=%d ", j,i,i*j);
        }
        printf("\n");
    }
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j < 10 ; j++) {
            if (5-i+1 < j && 5+i-1 > j) printf("*");
            else printf(" ");
        }
        printf("\n\n");
    }
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j < 10 ; j++) {
            if (5-i+1 < j && 5+i-1 > j) printf("*");
            else printf(" ");
        }
        if (i == 2) break;
        printf("\n\n");
    }
    return 0;
}