//1.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f1(int x,int y)
{
    int i,pow=1;
    for (i = 0; i < y; i++)
    {
        pow = pow * x;
    }
    printf("%d", pow);
}
int main()
{
    f1(5,2);
}
