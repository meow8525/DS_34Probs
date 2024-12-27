#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int input;
    scanf("%d", &input);
    if(input > 0) printf("正數\n");
    else if(input < 0) printf("負數\n");
    else printf("0\n");
	return 0;
}