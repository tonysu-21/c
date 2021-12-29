#include <stdio.h>

char *getmonth(int n);

int main()
{
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if (s == NULL)
        printf("wrong input!\n");
    else
        printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */

char *getmonth(int n)
{
    static char a[][19] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    if (0 <= n - 1 && n - 1 < 12)
        return (a[n - 1]);
    else
        return (NULL);
}