#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double w, h;
    scanf("%lf %lf", &w, &h);
    h /= 100;
    double bmi = w;
    bmi = round((w / (h * h)) * 100) / 100;
    printf("%.2f\n", bmi);
	return 0;
}