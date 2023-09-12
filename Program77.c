// accept N numbers from user and display sum of even and sum of even 



#include <stdio.h>
#include <stdlib.h>    // for malloc 


void SumofEvenOdd(int Arr[] , int iSize)
{
   int iCnt = 0 , iSumEven = 0, iSumOdd = 0;
 
  

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if((Arr[iCnt] % 2) == 0)
      {
         iSumEven = iSumEven + Arr[iCnt];
      }
      else
      {
         iSumOdd = iSumOdd + Arr[iCnt];
      }
   }



   printf("Number of even elements are :%d \n",iSumEven);
   printf("Number of odd elements are :%d \n",iSumOdd);
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


  SumofEvenOdd(ptr , iLength);

   




  return 0;
}