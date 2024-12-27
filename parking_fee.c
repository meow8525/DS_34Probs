#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int inH, outH, inM, outM, output = 0;
    scanf("%d %d %d %d", &inH, &inM, &outH, &outM);
    if(outM < inM){
        outH -= 1;
        outM += 60;
    }
    int gapH = outH - inH, gapM = outM - inM;
    if(gapH < 2) output += (gapH * 60 + ((gapM / 30) * 30));
    else if(gapH < 4) output += 120 + ((gapH - 2) * 80 + ((gapM / 30) * 40));
    else output += 120 + 160 + ((gapH - 4) * 120 + ((gapM / 30) * 60));
    printf("%d\n", output);
	return 0;
}