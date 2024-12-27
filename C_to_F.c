#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double input, output;
    scanf("%lf", &input);
    output = (input * 9 / 5) + 32;
    output = round(output * 10) / 10;
    printf("%.1f\n", output);
	return 0;
}