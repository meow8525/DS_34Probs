#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char nums[5];
    scanf("%s", nums);
    for(int i = 3; i >= 0; i--)
        (i) ? printf("%d,", nums[i] - '0') : printf("%d\n", nums[i] - '0');
	return 0;
}