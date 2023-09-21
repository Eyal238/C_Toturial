//1.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num;
    do {
        printf("Enter a number above or equal to zero: ");
        scanf("%d", &num);
    } while (num < 0);
    if (num % 2 == 0)
        printf("%d is pair. \n\n", num);
    else
        printf("%d is odd. \n\n", num);
}
//2.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i = 0;
    int grade, sum = 0;
    float average;
    while (i < 8)
    {
        printf("please enter the %d grade:", i + 1);
        scanf("%d", &grade);
        sum = sum + grade;
        i++;
    }
    average = sum / 8;
    printf("The  average is %f.",average);
}
//3.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i = 0, number;
    int count = 10000;
    int ans;
    printf("Enter your number:");
    scanf("%d", &number);
    while (number > 10)
    {
        if ((number / count) == (number % 10))
        {
            ans = 1;
        }
        else
        {
            ans = 0;
            break;
        }
        number = number % count;
        number = number % 10;
        count = count / 100;
    }
    if (ans == 1)
        printf("The value is palindrom!");
    else
        printf("The value is not palindrom!");
}
