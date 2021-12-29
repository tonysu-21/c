#include <stdio.h>
#include <math.h>

int main()
{
    int denominator = 1, flag = 1;
    double esp, item = 1.0, sum = 0;

    scanf("%lf", &esp);

    do
    {
        item = flag * 1.0 / denominator;
        sum = sum + item;
        flag = -flag;
        denominator = denominator + 3;
    } while (fabs(item) > esp);

    printf("sum = %.6f\n", sum);

    return 0;
}