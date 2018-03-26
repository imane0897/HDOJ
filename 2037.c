#include <stdio.h>
#include <stdlib.h>

struct show
{
    int begin_time;
    int end_time;
};

int cmp(const void *a, const void *b)
{
    return ((struct show *)a)->end_time - ((struct show *)b)->end_time;
}

int main(void)
{
    int n, count, latest_time;
    struct show a[101];
    while (scanf("%d", &n) && n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d", &a[i].begin_time, &a[i].end_time);
        }
        qsort(a, n, sizeof(struct show), cmp);

        count = 0;
        latest_time = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i].begin_time >= latest_time)
            {
                latest_time = a[i].end_time;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}