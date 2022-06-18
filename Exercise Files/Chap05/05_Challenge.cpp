#include <cstdio>

unsigned int factorial (const int n);

int main() {
    int n = 4;
    unsigned int res = factorial(n);
    printf("%d's factorial is %d.\n", n, res);
    return 0;
}

unsigned int factorial (const int n) {
    static unsigned int res = 1;
    for (int i = n; i > 0; i--)
    {
        res *= i;
    }
    return res;
    
}