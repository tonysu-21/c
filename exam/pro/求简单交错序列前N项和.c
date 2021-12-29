#include <stdio.h>

int main()
{
    int n, base = 1, flag = 1;
    double num, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        num = flag * 1.0 / base;
        sum += num;
        base = base + 3;
        flag = -flag;
    }

    printf("sum = %.3f\n", sum);

    return 0;
}