// accept N numbers from user and count number of even and odd numbers from that numbers 



#include <stdio.h>
#include <stdlib.h>    // for malloc 


void DisplayEvenOddCount(int Arr[] , int iSize)
{
   int iCnt = 0 , iEvenCnt = 0, iOddCnt = 0;
 
  

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if((Arr[iCnt] % 2) == 0)
      {
         iEvenCnt++;
      }
   }


 iOddCnt = iSize - iEvenCnt;

   printf("Number of even elements are :%d \n",iEvenCnt);
   printf("Number of odd elements are :%d \n",iOddCnt);
}


int main()
{
  int *ptr = NULL;
  int iLength = 0, i = 0, iRet = 0;

  printf("Enter the no.of ELements :\n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the elements :\n");

  for(i = 0; i < iLength; i++)
  {

   scanf("%d",&ptr[i]);

  }


  DisplayEvenOddCount(ptr , iLength);

   




  return 0;
}