#include <stdio.h>
int a, b, c = 0;
void preIncrement();
void postIncrement();

int main()
{
    preIncrement();
    postIncrement();
    return 0;
}

void preIncrement(void)
{
    //first a =1
    int a = 1;
    //++a pre increment a = 2+2
    //++a is having higher presedence so first the value is incremented and then assigned to a
    a += ++a;
    printf("%d\n", a);
}
void postIncrement(void)
{
    //first a=1;
    //a++ post incremented a=2+1;
    //here a++ post incremented first the value is assigned then it gets incremented 
    int a = 1;
    a += a++;
    printf("%d", a);
}