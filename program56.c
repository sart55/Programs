
#include <stdio.h>


void DisplayEvenOddDigits(int iNo)
{
  
  int iDigit = 0;
  int iEvenCnt = 0;
  int iOddCnt = 0;
  
  
  if(iNo == 0)  
  {
     printf("Nmuber of even digits are : 0 \n");
     printf("Nmuber of even digits are : 1 \n");

     return;   //imp -- otherwise it will print all four sentences 
  }

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    
    if (iDigit %2 ==0)
    {
      iEvenCnt ++;
    }

    else
    {
      iOddCnt ++;
    }

    iNo = iNo / 10;

  }

  printf("Nmuber of even digits are : %d\n",iEvenCnt);
  printf("Nmuber of even digits are : %d\n",iOddCnt);
  
}


int main()
{

int iValue = 0;


printf("Enter the number : \n");
scanf(" %d", &iValue);


DisplayEvenOddDigits(iValue);



  return 0;
}