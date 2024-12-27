#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char nums[5];
    scanf("%s", nums);
    for(int i = 0; i < 4; i++)
        printf("%d\n", nums[i] - '0');
	return 0;
}