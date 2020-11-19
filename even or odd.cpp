#include<iostream>
using namespace std;

int main()
{
    int num ;
    
    cout<<"Enter the number :";
    cin>>num;
    
    if (num % 2 ==0)
        cout<<"The Number Entered is an Even integer "<<num;
        else
        cout<<"The Number Entered is an odd integer "<<num;
        
    return 0;
}