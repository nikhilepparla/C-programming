#include <stdio.h>
int main()
{
    float f, c;
    int low = 0, high = 300, inc = 20;

    c = low;
    while (c <=  high)
    {
        f = ((c * 9.0) / 5) + 32;
        printf("%.2f\t%.2f\n", c, f);
        c += inc;
    }

    return 0;
}