#include <stdio.h>

int main(void)
{
    int s, v, t;
    scanf("%i %i\n", &s, &v);
    if (s % v == 0)
    {
        t = s / v;
    }
    else
    {
        t = (s / v) + 1;
    }
    int m = 50 - t, h = 7;
    while (m < 0)
    {
        m += 60;
        h --;
        if (h < 0)
        {
            h += 24;
        }
    }
    printf("%02d:%02d\n", h, m);
    
    return 0;
}
