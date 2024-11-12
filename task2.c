//
// Created by nhirsama on 24-11-12.
//
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main() {
    SetConsoleOutputCP(65001);
    struct student {
        char time[20];
        char name[20];
        int age;
        char class1[20];
        int studentNumber;
    };
    struct student student = {"22:41:00","nhirsama",20,"通信2303",230270124};
    char input[20] = {0};
    scanf("%s", input);
    if (strcmp(input,"time") == 0) {
        printf("%s\n", student.time);
    }
    else if (strcmp(input,"Student") == 0) {
        printf("%s ", student.name);
        printf("%d ", student.age);
        printf("%s ", student.class1);
        printf("%d\n", student.studentNumber);
    }
    return 0;
}