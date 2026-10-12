#include <stdio.h>

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    printf("sum = %d\n", sumTwo(3, 5));
    printf("square = %d\n", square(4));
    printf("max = %d\n", get_max(7, 2));

    return 0;
}


