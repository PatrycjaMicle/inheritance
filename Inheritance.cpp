#include <iostream>

using namespace std;

class Point
{
    float x,y;
    string name;

public:

    void show()
    {
        cout<<name<<"("<<x<<","<<y<<")"<<endl;
    }

    Point (string n="S", float a=0 , float b=0)
    {
        name=n;
        x=a;
        y=b;
    }
};

class Circle :public Point // class circle iherits public from class Points
{
    float r;
    string name;

public:

    void show()
    {
        cout<<"Circle with name "<<name<<endl;
        cout<<"The middle point of this circle: ";
        Point::show();
        cout<<"Radius: "<<r<<endl;
    }

    Circle(string nc="circle", string np="S", float a=0, float b=0, float pr=2)
    :Point(np,a,b)                  //we can't iherit constructors! but we can use them to creating a new constructor of a child
    {
        name=nc;
        r=pr;
    }

};

int main()
{

 Circle c1;
 c1.show();


    return 0;
}
