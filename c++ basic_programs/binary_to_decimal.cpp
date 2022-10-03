#include<iostream>
using namespace std;
int main(){
    system("cls");
    int n,r,i=1,s=0;
    cout<<"enter: ";
    cin>>n;
    while(n)
    {
        r=n%10;
        s+=i*r;
        i*=2;
        n=n/10;
    }
    cout<<s;
}