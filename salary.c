#include <stdio.h>
#include <math.h>

int main(){
    int t, s;
    double output = 0;
    scanf("%d %d", &t, &s);
    if(t <= 60) output += t * s;
    else if(t <= 120) output += s * 60 + (t - 60) * s * 1.33;
    else output = s * 60 * 2.33 + (t - 120) * s * 1.66;
    printf("%.1f\n", output);
}