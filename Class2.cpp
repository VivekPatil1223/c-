#include<iostream>
using namespace std;
class Student
{   public:
        int roll;
        string name;
        void insert(int i,string n)
        {
            roll =i;
            name=n;
        }
        void display()
        {
            cout<<roll<<"  "<<name<<endl;
        }
        
};
int main()
{
        Student S;
        S.insert(36,"vivek");
        S.display();
        return 0;
}