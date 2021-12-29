#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000][1000], min[1000];
    int n, flag = 0;

    scanf("%d", &n);

    getchar();

    for (int i = 0; i < n; i++)
    {
        scanf("%s", ch[i]);

        if (flag == 0)
        {
            strcpy(min, ch[i]);
            flag = 1;
        }

        if (strcmp(min, ch[i]) > 0)
            strcpy(min, ch[i]);
    }

    printf("Min is: %s", min);

    return 0;
}
