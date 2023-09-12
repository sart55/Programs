//Input = 751
//Output = 3

//Input = 7515
//Output = 4

//Input = 7
// Output = 

//Input = 
//Output = 



#include <stdio.h>


int CountDigits(int iNo)
{
  
  int iDigit = 0;
  int iCnt = 0;
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    iNo = iNo / 10;
    iCnt++;
  }
  return iCnt;
}


int main()
{

int iValue = 0;
int iRet = 0;

printf("Enter the number : \n");
scanf(" %d", &iValue);


iRet = CountDigits(iValue);


printf("Number of digits are : %d \n ",iRet);






  return 0;
}