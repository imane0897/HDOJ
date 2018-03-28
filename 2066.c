#include <stdio.h>
#include <string.h>

const int MAXN = 1010;
const int INF = 0x3f3f3f3f;
int cost[MAXN][MAXN];
int lowcost[MAXN];
int visit[MAXN];

void Dijkstra(int n)
{
    for (int i = 0; i < n; i++)
    {
        lowcost[i] = INF;
        visit[i] = 0;
    }
    lowcost[0] = 0;
    for (int j = 0; j < n; j++)
    {
        int k = -1;
        int min = INF;
        for (int i = 0; i < n; i++)
        {
            if (!visit[i] && lowcost[i] < min)
            {
                min = lowcost[i];
                k = i;
            }
        }
        if (k == -1)
        {
            break;
        }
        visit[k] = 1;
        for (int i = 0; i < n; i++)
        {
            if (!visit[i] && lowcost[k] + cost[k][i] < lowcost[i])
            {
                lowcost[i] = lowcost[k] + cost[k][i];
            }
        }
    }
}

int main(void)
{
    int t, s, d, n, a, b, c, min;
    while (scanf("%d%d%d", &t, &s, &d) != EOF)
    {
        n = 0;
        for (int i = 0; i < MAXN; i++)
        {
            for (int j = 0; j < MAXN; j++)
            {
                cost[i][j] = INF;
            }
        }
        while (t--)
        {
            scanf("%d%d%d", &a, &b, &c);
            cost[a][b] = c;
            cost[b][a] = c;
            n = a > n ? a : n;
            n = b > n ? b : n;
        }
        while (s--)
        {
            scanf("%d", &c);
            cost[0][c] = 0;
            cost[c][0] = 0;
        }
        Dijkstra(n + 1);
        min = INF;
        while (d--)
        {
            scanf("%d", &c);
            min = min < lowcost[c] ? min : lowcost[c];
        }
        printf("%d\n", min);
    }
    return 0;
}