#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n%d*%d=%d\n%d-%d=%d\n", a, b, a+b, a, b, a*b, a, b, a-b);
    int quotient = a / b;
    int remainder = a % b;
    // deal with the remainder < 0 condition 
    if (remainder < 0) {
        remainder += (b > 0 ? b : -b);
        quotient -= (b > 0 ? 1 : -1);
    }
    printf("%d/%d=%d...%d\n", a, b, quotient, remainder);
    return 0;
}