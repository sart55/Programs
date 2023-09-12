#include<stdio.h>

int Largestnumber(int iNo)
{
    int iDigit = 0; 
   
    int iMax= 0;


    ////////////////////////


    if(iNo < 0 )  // updater
    {
        iNo = -iNo;
    }

    ////////////////////////


    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;


    }

   return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

   iRet = Largestnumber(iValue);


   printf("Largest number is : %d \n",iRet);
    return 0;
}


// 271