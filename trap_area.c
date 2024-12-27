#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int b, h, t;
    scanf("%d %d %d", &t, &b, &h);
    double output = b + t;
    output *= h;
    output /= 2;
    printf("Trapezoid area:%.1f\n", output);
	return 0;
}