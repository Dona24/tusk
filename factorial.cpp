#include<iostream>
using namespace std;
int fac(int);
int main()
{
    int n,a;
    cin>>n;
    a=fac(n);
    cout<<a;

}
int fac(int n)
{
    if(n==1 or n==0)
    {
        return 1;
    }
    else
    n=n*fac(n-1);
return n;
}

