#include<stdio.h>

int DisplayNo ()
{
    int iCnt = 0;
    for(iCnt = 4; iCnt >= 1; iCnt --)
    {
        printf("%d \n",iCnt);
    }
}
int main()
{   
    DisplayNo();
    return 0;

}
