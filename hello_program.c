#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // give a name, print("Hello name")
    printf("Hello ");
    char name[100000];
    scanf("%s", name);
    printf("%s\n", name);
	return 0;
}