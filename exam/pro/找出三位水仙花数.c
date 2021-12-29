#include <stdio.h>
#include <math.h>

int main()
{
    int M, N;
    int g, s, b;

    scanf("%d%d", &M, &N);

    int q = M, w = N;

    if (100 <= M && M <= N && 100 <= N && N <= 999)
    {
        for (; q <= w; q++)
        {
            g = q % 10;
            s = q % 100 / 10;
            b = q / 100;

            if (q == pow(g, 3) + pow(s, 3) + pow(b, 3))
                printf("%d\n", q);
        }
    }
    else
        printf("Invalid Value.");

    return 0;
}
