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
//2.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f2(int x)
{
    int i;
    int a = 1, b = 1;
    int res = 0;
    for (i = 0; i <= x; i++)
    {
        if((x==a)||(x==b))
        {
            res = 1;
            break;
        }
        a = a + b;
        b = a + b;
    }
    if(res==1)
        printf("true");
    else
        printf("false");
}
int main()
{
    f2(12);
}
