#include <stdio.h>

void Display(int iValue)
{
   int iCnt = 0;
   for(iCnt=0 ;iCnt<= iValue;iCnt++)
   {
      printf("%d \n",iCnt);

   }
}

int main()
{
 
 int iNo = 0;
 printf("enter the value:");
 scanf("%d",&iNo);

 Display(iNo);


   return 0;
}