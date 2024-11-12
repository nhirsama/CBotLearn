//
// Created by nhirsama on 24-11-12.
//
#include <stdio.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001);
    char inputStr[20] = "";
    int condition = 0;
    scanf("%s", inputStr);
    for (int i = 0; i < 20 ;i++) {
        if ('A'<=inputStr[i] && inputStr[i]<='Z') {
            inputStr[i] = inputStr[i] - 'A' + 'a';
        }
        condition += (int)inputStr[i];
    }
    //printf("%d", condition);
    switch (condition) {
        case 417: {
            printf("nhirsama\n");   //易得"name"的char和为417
            break;
        }
        case 534: {
            printf("通信2303\n");
            break;
        }
        case 301: {
            printf("20\n");     //age的char和为301
            break;
        }
        default:printf("NULL\n");
    }
    return 0;
}