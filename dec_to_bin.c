#include <stdio.h>

int main(){
    int input;
    scanf("%d", &input);
    unsigned char binary = (unsigned char)input;
    for (int i = 7; i >= 0; i--) {
        printf("%d", (binary >> i) & 1);
    }
    printf("\n");
}