//1.
void dis(int t1,int t2,int v1,int v2)
{
	int x1, x2,deltaX;
	float deltaXKm;
	x1 = t1*v1;
	x2 = t1*v2;
	printf("%d\n", x1);
	printf("%d\n", x2);
	deltaX = abs(x2 - x1);
	deltaXKm =(float)deltaX/1000;
	printf("%0.3f",deltaXKm);
}
//2.
void f2(int num1,int num2)
{
	int count1 = 0,palind1=1,count2=0,palind2=1;
	int divide1 = 1, divide2 = 1;
	int num1a = num1,num2a=num2;
	//בודק כמה ספרות במספר
	while (num1 > 0)
	{
		count1++;
		num1 = num1 / 10;
		divide1 = divide1 * 10;
	}
	while (num2 > 0)
	{
		count2++;
		num2 = num2 / 10;
		divide2 = divide2 * 10;
	}
	divide1 = divide1 / 10;
	divide1 = divide1 / 10;
	printf("count1 = %d\n",count1);
	printf("count2 = %d\n",count2);
	//בודק האם הוא פלינדרום
	while (num1a > 0)
	{
		if (num1a % 10 != num1a / divide1)
		{
			palind1 = 0;
			break;
		}
		num1a = num1a % divide1;
		num1a = num1a / 10;
		divide1 /= 100;
	}
	while (num2a > 0)
	{
		if (num2a % 10 != num2a / divide2)
		{
			palind2 = 0;
			break;
		}
		num2a = num2a % divide2;
		num2a = num2a / 10;
		divide2 /= 100;
	}
	if (palind1 == 1 || palind2 == 1)
		printf("One of the numbers is a palindrome");
	else
		printf("No number is a palindrome");

}
//3.
void f3(int arr1[8])
{
	int i = 0,max1=arr1[0],max2=arr1[0],temp;
	for (i = 0; i < 8; i++)
	{
		if (arr1[i] > max2)
		    max2 = arr1[i];
		if (max2 > max1)
		{
			temp = max2;
			max2 = max1;
			max1 = temp;
		}
			
	}
	printf("max1=%d\n", max1);
	printf("max2=%d\n", max2);
	printf("%d", max1 + max2);
}
//4. 
void f4(int arr1[])
{
	int i,n=3,sum=0;
	for (i = 0; i < 4; i++)
	{
		if (arr1[i] > 0)
			arr1[i] = 1;
		else
			arr1[i] = 0;
	}
	for (i = 0; i < 4; i++)
		printf("%d", arr1[i]);
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		if (arr1[i] == 1)
		{
			arr1[i] = pow(2, n);
			sum = sum + arr1[i];
		}
		n--;
	}
	printf("%d",sum);
}

