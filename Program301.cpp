#include<iostream>
using namespace std;

int Addition(int i, int j)
{
    int ans = 0;
    ans = i + j;

    return ans;
}


int main()
{
    int a = 11, b = 10, iRet = 0;

    iRet = Addition(a,b);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}