#include<iostream>
using namespace std;

class Lion
{
    public:
    double weight;
    string color;
    int age;
    
};
int main()
{
        Lion leo;
        leo.weight=350;
        leo.color ="Tan";
        leo.age=6;
        
        cout<<"The weight of the Lion is:"<<leo.weight<<endl;
        cout<<"color of Lion is:"<<leo.color<<endl;
        cout<<"Age og Lion is :"<<leo.age<<endl;
        return 0;
}