#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,i,flag=0;
    cout<<"enter : ";
    cin>>n;
    for(i=2;i<(n/2);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        cout<<"not prime";
    }
    else{
        cout<<"prime";


}