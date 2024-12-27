#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        double w;
        scanf("%lf", &w);
        w = round(w * w * 10) / 10; // round can do 四捨五入 in integer
        printf("%.1f\n", w);
    }
	return 0;
}