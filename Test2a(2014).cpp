// 1. כתוב פונקציה המקבלת מערך של 10 מספרים שלמים, הפונקציה תמיין את המערך בסדר יורד
void f1(int arr1[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
        printf("%d ",arr1[i]);
    printf("\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(arr1[j]<arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",arr1[i]);
}
//2. כתוב פונקציה המקבלת מספר שלם כלשהו, הפונקציה תדפיס את מספר הספרות שלו ותחזיר תשובה בוליאנית האם הוא המספר פלינדרום
int f2(int num)
{
    int count=0,divide=1,temp=num;
    while(temp>0)
    {
        temp=temp/10;
        count++;
        divide*=10;
    }
    printf("%d\n",count);
    divide/=10;
    while(num>0)
    {
        if(num%10!=num/divide)
            return 0;
        num=num%divide;
        num=num/10;
        divide/=100;
    }
    return 1;
}
//3. כתוב פונקציה המקבלת מהירות של רכב ומספר זיהוי של הרכב, הפונקציה תקלוט מהמקלדת מהירות מקסימאלית מותרת ותחזיר תשובה בוליאנית האם 
// לשלוח קנס (0 או 1) אם הרכב מסתיים בספרה 0 או 5 וחרג במהירות 40 קמש ומעלה או מסתיים בספרה אחרת וחרג כבר ב-20 קמש ומעלה
int f3(int speed,int id)
{
    int maxSpeed;
    printf("Enter max speed:");
    scanf("%d",&maxSpeed);
    if((id%5==0)||(id%10==0))
    {
        if(speed>maxSpeed+40)
            return 1;
        else
            return 0;
    }
    else
    {
        if(speed>maxSpeed+20)
            return 1;
        else
            return 0;
    }
}
// 4. כתוב פונקציה המקבלת מטריצה 3 על 3 של שלמים , הפונקציה תדפיס את מספר השורה בה סכום המספרים הגדול ביותר
int f4(int arr1[3][3])
{
    int i,j;
    int arr2[3];
    int sum=0,index;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+arr1[i][j];
        }
        arr2[i]=sum;
        sum=0;
    }
    for(i=0;i<3;i++)
    {
        if (arr2[i] > sum) {
            sum = arr2[i];
            index = i;
        }
    }

    printf("%d",index+1);
}
