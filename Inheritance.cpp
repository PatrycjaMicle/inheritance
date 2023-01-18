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
protected:

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

class Ball :public Circle
{
    string name;

public:

    void show()
    {
        cout<<"Ball with the name: "<<name<<" is based on a circle"<<endl;
        Circle::show();
        cout<<"Volume of this ball: "<<(((4/3)*3.14)*Circle::r*Circle::r*Circle::r)<<endl;
    }

    Ball(string nb="MyBall",string nc="circle base for ball", string np="middle ball",float a=0, float b=9, float pr=3)
    :Circle(nc,np,a,b,pr)
    {
        name=nb;
    }
};

int main()
{

 Circle c1;
 c1.show();

 cout<<endl;

 Ball b1;
 b1.show();


    return 0;
}
