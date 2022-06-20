#include <cstdio>

template <typename num>
num factorial (num a) {
    static num res = 1;
    for (num i = 1; i <= a; i++)
    {
        res *= i;
    }
    return res;
}

int main() {
    long int n = 5;
    // unsigned int res = factorial(n);
    printf("%ld's factorial is %ld.\n", n, factorial(n));
    return 0;
}
