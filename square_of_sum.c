#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        int output = (a + b) * (a + b);
        printf("%d\n", output);
    }
	return 0;
}