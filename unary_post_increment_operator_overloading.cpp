#include<iostream>
using namespace std;
class increment
{
    int x,y;
public:
    increment(){x=0;y=0;} //default constructor..initialize x=0 and y=0
    increment(int p,int q){x=p;y=q;} //initialize x and y with p and q
    increment operator++(int); //operator function
    void display(){cout<<"X is : "<<x<<endl<<"Y is : "<<y<<endl;} // display function for display x and y value
};
increment increment::operator++(int) // operator function definition of operator function
{
    increment temp;
   temp.x=x++;
   temp.y=y++;
   return temp;
}

int main()
{
    increment obj1(10,12);
    cout<<"increment but not effect"<<endl;
    (obj1++).display();
    cout<<"After effect"<<endl;
    obj1.display();


    return 0;
}

