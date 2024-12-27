#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char nums[6];
    scanf("%s", nums);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < nums[i] - '0'; j++) printf("*");
        printf("\n");
    }
	return 0;
}