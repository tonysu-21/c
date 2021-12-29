
#include <stdio.h>
void bubble(int a[], int n);
int main(void)
{
    int n, a[10];
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubble(a, n);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */

void bubble(int a[], int n)
{
    int b[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                b[i] = a[i];
                a[i] = a[j];
                a[j] = b[i];
            }
        }
    }
}