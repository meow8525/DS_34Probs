#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b, c, big = -1;
    scanf("%d %d %d", &a, &b, &c);
    if(a > big) big = a;
    if(b > big) big = b;
    if(c > big) big = c;
    printf("%d\n", big);
	return 0;
}