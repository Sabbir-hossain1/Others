/* Program Name: Binary '+' operator overloading program
   Programed By : Dr Sabbir Hossain
   Date : 26-11-2018
*/

#include<iostream>
using namespace std;
class addition{    //class definition.
    int x,y;
public:
    addition(){x=0;y=0;} //default constructor and initialize x=0,y=0
    addition(int p,int q){x=p;y=q;} //parameterize constructor and initialize x = p,y = q
    addition operator+(addition obj); //operator overloading function
    void display(){cout<<"X is : "<<x<<endl<<"Y is : "<<y<<endl<<endl;}
};
addition addition::operator+(addition obj) /* here first addition is return type and second addition is class name */
{

    addition temp;
    temp.x=x+obj.x;
    temp.y=y+obj.y;
    return temp;
}
int main()
{
    addition o1(10,12),o2(13,14),o3;
    cout<<"o1 is "<<endl<<endl;
    o1.display();
    cout<<"o2 is "<<endl<<endl;
    o2.display();
    o3 = o1+o2;
    cout<<"o1+o2 is "<<endl<<endl;
    o3.display();
    return 0;
}
