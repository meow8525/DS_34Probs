#include <stdio.h>
#include <stdlib.h>
#define dayNum 24
#define hrNum 60
#define minNum 60

int main(int argc, char *argv[]) {
    int day = 0, hr = 0, min = 0, sec = 0, input;
    scanf("%d", &input);
    day = input / (60 * 60 * 24);
    input %= (60 * 60 * 24);
    hr = input / (60 * 60);
    input %= 3600;
    min = input / 60;
    sec = input % 60;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", day, hr, min, sec);
	return 0;
}