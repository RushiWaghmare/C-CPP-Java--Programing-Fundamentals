#include<stdio.h>

int DisplayNo (int iValue)
{
    int iCnt = 0;
    for(iCnt = iValue; iCnt >= 1; iCnt --)
    {
        printf("%d \n",iCnt);
    }
}
int main()
{   
    int iFrequency = 0;

    printf("Enter the no: \n");
    scanf("%d", &iFrequency);
    
    DisplayNo(iFrequency);
    return 0;

}
