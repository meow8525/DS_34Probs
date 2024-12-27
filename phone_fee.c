#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int input;
    scanf("%d", &input);
    double output;
    if(input < 800) output = 0.9 * input;
    else if(input < 1500) output = input * 0.81;
    else output = input * 0.9 * 0.79;
    output = round(output * 10) / 10;
    printf("%.1f\n", output);
	return 0;
}