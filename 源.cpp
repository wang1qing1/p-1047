#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, l, m, u, v, k, a[10001], flag;
    flag = 0;
    scanf("%d%d", &l, &m);
    for (i = 0; i <= l; i++)
    {
        a[i] = 0;
    }
    for (j = 1; j <= m; j++)
    {
        scanf("%d%d", &u, &v);
        for (k = u; k <= v; k++)
        {
            a[k] = 1;
        }
    }
    for (i = 0; i <= l; i++)
    {
        if (a[i] == 0)
            ++flag;
    }
    printf("%d\n", flag);
    return 0;
}
