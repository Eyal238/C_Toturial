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
