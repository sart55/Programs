#include<stdio.h>



void Display(int iValue)
{

   int iCnt=0;

   iCnt = 1;

   while(iCnt <= iValue)
   {
      printf("Jay Ganesh \n");
      iCnt++;
   }
}


int main()
{

 int iNo = 0;
 printf("enter the number of iteration:");
 scanf("%d",&iNo);
 Display(iNo);

	return 0;
}