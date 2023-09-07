// 1.
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
int main()
{
	char let1,let2,let3;
		
	printf("Enter 3 letters:\n");
	scanf("%s",&let1);
	scanf("%s",&let2);
	scanf("%s",&let3);
	
	printf("%c, %c, %c,",let3,let2,let1);
}
//2.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int x, y;
	int p, s;
	printf("Enter the length of the rectangle:");
	scanf("%d", &x);
	printf("Enter the width of the rectangle:");
	scanf("%d", &y);
	p = 2 * (x + y);
	s = x * y;
	printf("The perimeter of the rectangle is %d:\n",p);
	printf("The area of the rectangle is %d:",s); 
}
