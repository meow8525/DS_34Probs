#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        int num;
        scanf("%d", &num);
        printf("%d %d %d\n", num, num * num, num * num * num);
    }
	return 0;
}