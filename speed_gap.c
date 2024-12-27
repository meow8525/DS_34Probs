#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int input;
    scanf("%d", &input);
    input *= 100;
    int output = ceil(input / 23.8); // speed gap = 23.8
    printf("%d\n", output);
	return 0;
}