#include <stdio.h>

int main(){
    int size;
	scanf("%d", &size);
    for(int i = 0; i < size; i++){
	    long long output = 0;
        int a, b;
        scanf("%d %d", &a, &b);
        output += a;
        output += b;
        printf("%lld\n", output);
    }
	return 0;
}