#include<iostream>
using namespace std;


class DigitX
{
  public:

    int iNo;

    DigitX()
    {
        iNo = 0;
    }

    DigitX(int i)
    {
        iNo = i;
    }

    int SumEvenDigit()
    {
        int iCnt = 0,iDigit = 0, iSum = 0,iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            if((iDigit %2) == 0)
            {
                iSum = iSum + iDigit;
            }

            iTemp = iTemp / 10;
        }

        return iSum;
    }


};


int main()
{

    int iValue = 0, iRet = 0;

    cout<<"Enter a number : "<<"\n";
    cin>>iValue;

 
    DigitX obj(iValue);
    
    iRet = obj.SumEvenDigit();


    cout<<"Sum of Even Digit is : "<<iRet<<"\n";

    cout<<obj.iNo<<"\n";





  return 0;
}