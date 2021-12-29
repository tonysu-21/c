#include <stdio.h>

int main()
{
    int m, n, isprime, count = 0, sum = 0;

    scanf("%d %d", &m, &n);

    if (m == 1)
        m++;

    for (int i = m; i <= n; i++)
    {
        isprime = 1;
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            sum += i;
            count++;
        }
    }

    printf("%d %d\n", count, sum);

    return 0;
}