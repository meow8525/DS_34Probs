#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int input;
    scanf("%d", &input);
    double output = input;
    output = round(output * 16) / 10;
    printf("km=%.1f\n", output);
	return 0;
}