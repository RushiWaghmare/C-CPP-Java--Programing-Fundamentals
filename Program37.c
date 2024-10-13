#include<stdio.h>
int Display(int iValue)
{   
    int iCnt = 0;

    iCnt = 1; //1
    while(iCnt <=iValue) //2
    {
        printf("%d. Jay Ganesh...\n",iCnt);//4
        iCnt++; //3
    }
}
int main ()
{   
    int iFrequency = 0;

    printf("Enter the no of Iteration: \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    
    return 0;

}