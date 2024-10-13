#include<stdio.h>

int DisplayNo (int iValue)
{
    int iCnt = 0;
    int iNo = 5;

    for(iCnt = 1; iCnt <= iValue; iCnt ++)
    {
        printf("%d \n",iCnt);
    }
}
int main()
{   
    DisplayNo();
    return 0;

}
