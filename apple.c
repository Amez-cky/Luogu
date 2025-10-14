#include <stdio.h>

int main(void)
{
    int m, t, s, n;
    scanf("%d %d %d", &m, &t, &s);
    if (t == 0)
    {
        printf("0");
    }
    else
    {
        if (s % t == 0)
        {
            n = s / t;
        }
        else
        {
            n = (s / t) + 1;
        }
        if (m <= n)
        {
            printf("0");
        }
        else
        {
            printf("%d", m - n);
        }
    }

    return 0;
}
