//
// Created by Carlota on 29/10/2023.
//
#include <stdio.h>
#include <string.h>

int main(){
    char *StringValores[]= {"ford","fiat","toyota","hyundai","mazda"};
    int index;
    index = 0;
    printf("%s\n", StringValores[index]);
    index = 2;
    printf("%s\n", StringValores[index]);
    index = 4;
    printf("%s\n", StringValores[index]);
    index = 3;
    printf("%s\n", StringValores[index]);
    index = 1;
    printf("%s\n", StringValores[index]);

    return 0;
}