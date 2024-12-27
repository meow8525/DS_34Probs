#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int type = -1;
    scanf("%d", &type);
    if(type == 1)
        printf("    *\n   * *\n  *   *\n *     *\n*********\n");
    else if(type == 2)
        printf("    *\n   ***\n  *****\n *******\n*********\n");
    else
        printf("*********\n *******\n  *****\n   ***\n    *\n");
	return 0;
}