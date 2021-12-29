#include <stdio.h>

int main()
{
    int count;
    char ch, a[80], b[80];

    ch = getchar();

    for (int i = 0; ch != '\n'; i++)
    {
        a[i] = ch;
        count++;
        ch = getchar();
    }

    for (int j = 0, k = count - 1; j < count; j++, k--)
        b[k] = a[j];

    for (int idx = 0; idx < count; idx++)
        printf("%c", b[idx]);

    return 0;
}