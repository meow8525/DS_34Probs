#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0, N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
        if(!(i % 2) && !(i % 3) && (i % 12)) sum += i;
    printf("%d\n", sum);
	return 0;
}