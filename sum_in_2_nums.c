#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        int low, high;
        long long output = 0;
        scanf("%d %d", &low, &high);
        if(low > high){
            int temp = low;
            low = high;
            high = temp;
        }
        for(int i = low; i <= high; i++)
            output += i;
        printf("%lld\n", output);
    }
	return 0;
}