#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int i=1,r=1;
    while(r<=n)
    {
        i++;
        r=i*i;
    }
    cout<<i-1;


}