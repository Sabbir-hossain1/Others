#include<iostream>
using namespace std;
class increment
{
    int x,y;
public:
    increment(){x=0;y=0;} //default constructor..initialize x=0 and y=0
    increment(int p,int q){x=p;y=q;} //initialize x and y with p and q
    increment operator++(); //operator function
    void display(){cout<<"X is : "<<x<<endl<<"Y is : "<<y<<endl;} // display function for display x and y value
};
increment increment::operator++() // operator function definition of operator function
{
   ++x;
   ++y;
   return *this;
}

int main()
{
    increment obj1(10,12),obj2(13,14);
    cout<<"Before increment obj1 is"<<endl;
    obj1.display();
    cout<<"Before increment obj2 is"<<endl;
    obj2.display();
    cout<<"After increment obj1 is "<<endl;
    ++obj1;
    obj1.display();
    cout<<"After increment obj2 is "<<endl;
    ++obj2;
    obj2.display();
    return 0;
}
