#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,s=0;
     cin>>n;
    // while(n)
    // {
    //    s*=10;
    //    s+=(n%10);
    //     n/=10;

    // }
    // cout<<s;

     int ans=0;
     while(n!=0)
     {
       int digit=n%10;
       ans=(ans*10)+digit;
       n/=10;
     }
     cout<<ans; 
     
}
