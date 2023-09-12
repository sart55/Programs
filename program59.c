

#include <stdio.h>


int Reverse(int iNo)
{
  
  int iDigit = 0;
  int iRev = 0;
  int iTemp = iNo;

  if(iNo < 0)
  {
    iNo = -iNo;
  }


  while(iNo != 0)
  {
    iDigit = iNo % 10;

    iRev = (iRev *10) + iDigit;


    iNo = iNo / 10;
    
  }


if(iRev == iTemp)
{
  printf("Given number is palandrome. \n");
}



  return iRev;
}


int main()
{

int iValue = 0;
int iRet = 0;

printf("Enter the number : \n");
scanf(" %d", &iValue);


iRet = Reverse(iValue);


printf("Reverse number is: %d \n ",iRet);




  return 0;
}