#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int L = -1, H = -1;
    scanf("%d %d", &L, &H);
    for(int i = 0; i < H; i++){
        for(int j = 0; j < L; j++) printf("*");
        printf("\n");
    }
	return 0;
}