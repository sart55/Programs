#include<iostream>
using namespace std;


class ArrayX
{
  public:
    int *Arr;
    int iSize;

    ArrayX(int i)
    {
        iSize = i;
        Arr = new int[iSize];    // Arr = (int *)malloc(iSiZE*(sizeof(int));
    }

    ~ArrayX()
    {
        delete []Arr;
    }

    void Accept()
    {
        cout<<"Enter the elements of Array: "<<"\n";

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];  //scanf("%d",&Arr[iCnt]);
        }
    }

     void Display()
    {
        cout<<"Entered Elements are:"<<"\n";

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";  //printf("%d\t",Arr[iCnt]);
        }
        cout<<"\n";
    }

    int Minimum()
    {
        int iStart = Arr[0];
        int iMin = 0;
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] < iStart)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }

};


int main()
{
    int iLength,iRet;

    cout<<"Enter the size of Array:"<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();
    

    iRet = obj.Minimum();

    cout<<"Minimum number from Array is:"<<iRet<<"\n";


    return 0;
}