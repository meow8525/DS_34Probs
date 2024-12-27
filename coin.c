#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int ten = 0, five = 0, one = 0, input;
    scanf("%d", &input);
    ten = input / 10;
    input %= 10;
    five = input / 5;
    input %= 5;
    one = input;
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", ten, five, one);
	return 0;
}