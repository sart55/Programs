// accept N numbers from user and count number of even numbers from that numbers 



#include <stdio.h>
#include <stdlib.h>    // for malloc 


int CountEven(int Arr[] , int iSize)
{
   int iCnt = 0 , iEvenCnt = 0;
 
  

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if((Arr[iCnt] % 2) == 0)
      {
         iEvenCnt++;
      }
   }

   return iEvenCnt;
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


  iRet = CountEven(ptr , iLength);

   printf("Numbers of even elements are: %d ",iRet);




  return 0;
}