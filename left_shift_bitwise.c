#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        int input;
        scanf("%d", &input);
        if(input > 31) printf("Value of more than 31\n");
        else{
            int output = 1;
            for(int j = 0; j < input; j++) output = output << 1;
            printf("%d\n", output);
        }
    }
	return 0;
}