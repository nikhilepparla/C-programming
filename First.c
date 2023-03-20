#include <stdio.h>
int main()
{
    float f, c;
    int low = 0, high = 300, inc = 20;

    f = low;
    while (f <= high)
    {
        c = (5.0/9.0)*(f-32.0);
        printf("%.1f\t %1.2f\n",f,c);
        f+=inc;
    }
    return 0;
}