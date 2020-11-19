#include<iostream>
using namespace std;

int main()
{
    int num1,num2,temp;
    cout<<" Enter the numbers to be swap :\n";
    cin>>num1>>num2;
    cout<<"Before swapping"<<endl;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    
    temp=num1;
    num1=num2;
    num2=temp;
    
    cout<<"\n After swapping"<<endl;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    return 0;
}

