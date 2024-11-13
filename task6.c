//
// Created by nhirsama on 24-11-12.
//
#include <stdio.h>
#include <string.h>
#include <windows.h>
char input[100] = {0};
char arr[512] = {0};
int main() {
    SetConsoleOutputCP(65001);
    scanf("%s", input);
    for (int i = 0; i < strlen(input); i++) {
        if ('a' <= input[i] && input[i] <= 'z' || 'A' <= input[i] && input[i] <= 'Z') {
            arr[input[i]]++;
        }
        if (input[i] == 'U' && input[i + 1] == 'P' && input[i + 2] == 'R' || input[i + 3] == 'E') {
            arr[0]++;
        }
    }
    for (int i = 'a'; i < 'z'+1; i++) {
        if (arr[i] != 0 ) {
            printf("%c:小写%d个", i-'a'+'A',arr[i]);
            if (arr[i-'a'+'A'] != 0) {
                printf("，大写%d个 ", arr[i-'a'+'A']);
            }
        }
    }
    for (int i = 'A'; i < 'Z'+1; i++) {
        if (arr[i] != 0 ) {
            printf("%c:大写%d个 ",i,arr[i]);
        }
    }
    if (arr[0] != 0) {
        printf("UPRE:%d个", arr[0]);
    }
    return 0;
}