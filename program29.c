#include <stdio.h>

int Multiplication(int iValue)
{
  

 unsigned long int iMult = 0;
 int iCnt = 1;

 for(iCnt = 1;iCnt <= iValue; iCnt++)
 {
   iMult = iMult * iCnt;

 }

return iMult;



}

int main()
{
 
 int iRet = 0;
 unsigned long int iNo = 0;

 printf("Enter a number: ");
 scanf("%d",&iNo);

 iRet = Multiplication(iNo);


 printf("Summation is:%d \n",iRet);


   return 0;
}