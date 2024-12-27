#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int m, n;
    scanf("%d %d", &m, &n);
    while(1){
        m = m % n;
        if(!m) {
            printf("%d\n", n);
            break;
        }
        n = n % m;
        if(!n) {
            printf("%d\n", m);
            break;
        }
    }
	return 0;
}