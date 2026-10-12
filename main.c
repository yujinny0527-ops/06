#include <stdio.h>

int get_integer(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    return n;
}

int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
        res *= i;

    return res;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main(void)
{
    int n, r;
    int result;

    printf("Enter n:\n");
    n = get_integer();

    printf("Enter r:\n");
    r = get_integer();

    result = combination(n, r);

    printf("Combination = %d\n", result);

    return 0;
}
