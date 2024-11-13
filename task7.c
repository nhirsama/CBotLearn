//
// Created by nhirsama on 24-11-12.
//
#include <stdio.h>
#include <windows.h>
int password;
char username[30];
void signUp();
void signIn();
int cookie = 0;
int main() {
    SetConsoleOutputCP(65001);
    int in = 0;
    while (in != 9) {
        printf("输入1登录,2注册,3修改密码,9退出:\n");
        scanf("%d", &in);
        switch (in) {
            case 1: {
                signUp();
                break;
            }
            case 2: {
                signIn();
                break;
            }
            case 3: {
                signUp();
                break;
            }
            default: {
                printf("请输入有效数字,1、2、3、9");
            }
        }
    }

}

void signUp() {
    int reInPassword = 9999999;
    printf("请输入账号:\n");
    scanf("%s",username);
    while (password != reInPassword) {
        printf("请输入密码,密码应为纯数字构成:\n");
        scanf("%d",&password);
        printf("请再次输入密码:\n");
        scanf("%d",&reInPassword);
    }
    printf("注册成功\n");
}

void signIn() {
    char InputUsername[30];
    int InputPassword;
    do {
        printf("请输入账号");
        scanf("%s",&InputUsername);
        printf("请输入密码");
        scanf("%d",&InputPassword);
    } while (password != InputPassword);
    printf("登录成功");
    cookie = 1;
}
