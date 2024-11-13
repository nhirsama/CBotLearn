//
// Created by nhirsama on 24-11-13.
//
#include <stdio.h>
unsigned char uint8_t;
unsigned short uint16_t;
int int32_t[2];
void printArray(char *arr,int length);
int main() {
    scanf("%d %d",&int32_t[0],&int32_t[1]);
    printf("%d\n",int32_t[0]);
    printf("%d\n",int32_t[1]);
    uint8_t = (char)int32_t[1];
    uint16_t = (short)int32_t[1];
    printf("%d\n",uint8_t);
    printf("%d\n",uint16_t);

}