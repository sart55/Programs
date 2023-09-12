// accept N numbers from user and 



#include <stdio.h>
#include <stdlib.h>    // for malloc 


int CalculateFrequency(int Arr[] , int iSize, int iNo)
{
   int iCnt = 0 , iFrequency = 0, iSumOdd = 0;
 
  

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if(Arr[iCnt] == iNo)
      {
         iFrequency++;
      }
      
   }

  return iFrequency;
}


int main()
{
  int *ptr = NULL;
  int iLength = 0, i = 0, iRet = 0, iValue = 0;

  printf("Enter the no.of ELements :\n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the elements :\n");

  for(i = 0; i < iLength; i++)
  {

   scanf("%d",&ptr[i]);

  }

 printf("Enter the element to findout the frequency : \n");
 scanf("%D",&iValue);

  iRet = CalculateFrequency(ptr , iLength, iValue);


 printf("Frequency of %d is %d",iValue, iRet);


free(ptr);

   




  return 0;
}