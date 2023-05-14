//    כתוב תוכנית הקולטת מהמשתמש מספרים שלמים חיוביים, מספר הקלטים לא ידוע. פעולת הקלט תיפסק כאשר מספר שלילי כלשהו
//    התוכנית תציג כפלט על המסך כמה מהמספרים שנקלטו גדולים מ-50 וכמה מהמספרים קטנים מ-50.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
void howMany50a()
{
	int num;
	int countBig = 0, countSmall = 0;
	printf("Enter your number:");
	scanf("%d", &num);
	while (num >= 0)
	{
		if (num >= 50)
			countBig++;
		else
			countSmall++;
		printf("Enter your number:");
		scanf("%d", &num);
	}
	printf("%d numbers less than fifty\n", countSmall);
	printf("%d numbers greater than fifty", countBig);
}
int main()
{
	howMany50a();
}
