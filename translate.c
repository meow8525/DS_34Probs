#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char chi[5][10] = {"狗\0", "貓\0", "鴨\0", "牛\0", "狐\0"},
        eng[5][10] = {"dog\0", "cat\0", "duck\0", "cow\0", "fox\0"};
    char input[100];
    scanf("%s", input);
    // if input string is english
    if(input[0] <= 'z' && input[0] >= 'a'){
        for(int i = 0; i < 5; i++)
            if(!strcmp(input, eng[i])) {
                printf("%s\n", chi[i]);
                return 0;
            }
    }
    // if input is chinese
    else{
        for(int i = 0; i < 5; i++)
            if(!strcmp(input, chi[i])) {
                printf("%s\n", eng[i]);
                return 0;
            }
    }
	return 0;
}