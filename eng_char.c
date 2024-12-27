#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char input;
    scanf("%c", &input);
    (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ||
    input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U') ? 
    printf("母音\n") : printf("子音\n");
	return 0;
}