#include <stdio.h>
#include <stdlib.h>

struct grade
{
    int number;
    char name[10];
    int s1, s2, s3;
};

int main()
{
    struct grade stu[10];
    int n;

    scanf("%d", &n);

    double average[3], max = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d %d %d", &stu[i].number, stu[i].name, &stu[i].s1, &stu[i].s2, &stu[i].s3);

        average[i] = (stu[i].s1 + stu[i].s2 + stu[i].s3) / 3.0;
    }

    int x;

    for (int j = 0; j < n; j++)
    {
        if (max < average[j])
        {
            max = average[j];
            x = j;
        }
    }

    printf("num:%d,name:%s,average:%.2lf", stu[x].number, stu[x].name, max);
    
    return 0;
}