#include<iostream>
using namespace std;

double Addition(double i, double j)
{
    double ans = 0;
    ans = i + j;

    return ans;
}


int main()
{
    double a = 11.9, b = 10.1, iRet = 0.0;

    iRet = Addition(a,b);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}