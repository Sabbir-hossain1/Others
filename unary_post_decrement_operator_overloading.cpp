/* Program Name: decrement operator '--' overloading
   Programed By : Dr Sabbir Hossain
   Date : 26-11-2018
*/
#include<iostream>
using namespace std;
class decrement
{
    int x,y;
public:
    decrement(){x=0;y=0;} //default constructor..initialize x=0 and y=0
    decrement(int p,int q){x=p;y=q;} //initialize x and y with p and q
    decrement operator--(int); //operator function
    void display(){cout<<"X is : "<<x<<endl<<"Y is : "<<y<<endl;} // display function for display x and y value
};
decrement decrement::operator--(int) // operator function definition of operator function
{
    decrement temp;
   temp.x=x--;
   temp.y=y--;
   return temp;
}

int main()
{
    decrement obj1(10,12);
    cout<<"decrement but not effect"<<endl;
    (obj1--).display();
    cout<<"After effect"<<endl;
    obj1.display();
    return 0;
}


