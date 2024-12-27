#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int x1, x2, y1, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    double output = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
    output = round(sqrt(output) * 100) / 100;
    printf("%.2f\n", output);
	return 0;
}