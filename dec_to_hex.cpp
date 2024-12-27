#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    vector<char> output;
    int input;
    scanf("%d", &input);
    while(input){
        char push = (input % 16 >= 10) ? ('A' + (input % 16) - 10) : '0' + (input % 16);
        output.push_back(push);
        input /= 16;
    }
    for(int i = output.size() - 1; i >= 0; i--) printf("%c", output[i]);
    printf("\n");
    return 0;
}