#include<stdio.h>

int DisplayNo (int iValue)
{
    int iCnt = 0;
    //      1           2           3
    for(iCnt = 1; iCnt <= iValue; iCnt ++)
    {
        printf("%d \n",iCnt);   //4
    }
}
int main()
{   
    int iFrequency = 0;

    printf("Enter the no : \n");
    scanf("%d", &iFrequency);

    DisplayNo(iFrequency);
    return 0;

}
