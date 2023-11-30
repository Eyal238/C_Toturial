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
//2.
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

//9. כתוב פונקציה המקבלת גובה של משולש שווה שוקיים. הפונקציה תדפיס משולש כוכביות על פי 
//    הגובה שהתקבל לפונקציה
void f9(int height)
{
	int i, j;
	int fix = height - 1;
	int	base = height + fix;
	int	x1 = base/2;
	int	x2 = x1;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < base; j++)
		{
			if ((j >= x1) and (j <= x2))
				printf("*");
			else
				printf(" ");
		}
		x1 = x1 - 1;
		x2 = x2 + 1;
		printf("\n");
	}
}
