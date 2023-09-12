#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int iSize)
{
   int iCnt = 0;
   T Max = Arr[0];

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if(Arr[iCnt] > Max)
      {
        Max = Arr[iCnt];
      }
   }

   return Max;
}

int main()
{
   int iData[] = {110,120,130,40};
   int iRet = 0;
   double fRet = 0.0;

   iRet = Maximum(iData,4);
   cout<<"Maximum is : "<<iRet<<"\n";

   float dData[] = {10.11,20.12,30.13,40.14};

   fRet = Maximum(dData,4);

   cout<<"Maximum is : "<<fRet<<"\n";
   return 0;
}