#include "stdc++.h"

short ObtainMultiplicativeInverse(int a, int b, int s0 = 1, int s1 = 0) {
    return b == 0 ? s0 : ObtainMultiplicativeInverse(b, a%b, s1, s0 - s1*(a/b) );
}

int main(void) {
    std::cout << ObtainMultiplicativeInverse(47, 2018) << "\n";  
}