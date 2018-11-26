/* Program Name: Binary '+' operator overloading program
   Programed By : Dr Sabbir Hossain
   Date : 26-11-2018
*/

#include<iostream>
using namespace std;
class increment
{
    int x,y;
public:
    increment(){x=0;y=0;} //default constructor..initialize x=0 and y=0
    increment(int p,int q){x=p;y=q;} //initialize x and y with p and q
    increment operator++(int); //operator function for post increment
    increment operator++();//operator function for pre increment
    void display(){cout<<"X is : "<<x<<endl<<"Y is : "<<y<<endl;} // display function for display x and y value
};
increment increment::operator++(int) // operator function definition of operator function
{
    increment temp;
   temp.x=x++;
   temp.y=y++;
   return temp;
}
increment increment::operator++(){
    x++;
    y++;
    return *this;
}

int main()
{
    increment obj1(10,12),obj2(1,2);
    cout<<"Before increment obj2 is "<<endl;
    obj2.display();
    ++obj2;
    cout<<"After increment obj2 is "<<endl;
    obj2.display();
    cout<<"increment but not effect of obj1"<<endl;
    (obj1++).display();
    cout<<"After effect"<<endl;
    obj1.display();


    return 0;
}


