#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // give height and weight, calculate area of triangle(L * H / 2)
    int H = -1, L = -1;
    scanf("%d %d", &H, &L);
    double area = H * L;
    area /= 2;
    printf("Triangle area:%.1f\n", area);
	return 0;
}