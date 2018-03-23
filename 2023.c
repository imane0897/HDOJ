#include <stdio.h>

int main(void)
{
    int n, m, sum, score[51][6], count, flag;
    double stu_avg[51], course_avg[6];
    while (scanf("%d%d", &n, &m) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &score[i][j]);
                sum += score[i][j];
            }
            stu_avg[i] = 1.0 * sum / m;
        }
        printf("%.2lf", stu_avg[0]);
        for (int i = 1; i < n; i++)
        {
            printf(" %.2lf", stu_avg[i]);
        }
        printf("\n");

        for (int j = 0; j < m; j++)
        {
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += score[i][j];
            }
            course_avg[j] = 1.0 * sum / n;
        }       
        printf("%.2lf", course_avg[0]);
        for (int i = 1; i < m; i++)
        {
            printf(" %.2lf", course_avg[i]);
        }
        printf("\n");

        count = 0;
        for (int i = 0; i < n; i++)
        {
            flag = 1;
            for (int j = 0; j < m; j++)
            {
                if (score[i][j] < course_avg[j])
                {
                    flag = 0;
                }
            }
            if (flag)
            {
                count++;
            }
        }
        printf("%d\n\n", count);
    }
    return 0;
}