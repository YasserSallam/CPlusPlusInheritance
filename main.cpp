#include <iostream>
using namespace std;
class geoShape{
int demintion1, demintion2;
public:
    //constructors
    geoShape(int d1,int d2){
    this->demintion1=d1;
    this->demintion2=d2;
    }
    geoShape(int x){
    demintion1=demintion2=x;
    }
    geoShape(){
    demintion1=demintion2=0;
    }
    //setters and getters
    void setdemintion1(int x){this->demintion1=x;}
    void setdemintion2(int x){this->demintion2=x;}
    int getdemintion1(){return this->demintion1;}
    int getdemintion2(){return this->demintion2;}
    //calc area method
    virtual  int calcArea(){return this->demintion1* this->demintion2;}
};
class rectangle:public geoShape{
public:
rectangle():geoShape(){};
rectangle(int x, int y):geoShape(x,y){};
};
class triangle:public geoShape{
public:
    triangle():geoShape(){};
    triangle(int x, int y):geoShape(x,y){};
    int calcArea(){
        return (0.5*getdemintion1()*getdemintion2());
        }
};
class square:protected rectangle{
public :
    square():rectangle(){};
    square(int x):rectangle(x,x){};
    void setdemintion( int x){setdemintion1(x); setdemintion2(x);}
    int getdemintion(){return getdemintion1();}
    int calcArea(){return getdemintion()*getdemintion();}
};
class circle:protected geoShape{
    public:
    circle():geoShape(){};
    circle(int x):geoShape(x,x){};
    void setradious(int radious){setdemintion1(radious); setdemintion2(radious);}
    int getradious(){return getdemintion1();}
    int calcArea(){return getdemintion1()*getdemintion2()*22/7;}
};
int main()
{
circle c;
c.setradious(5);
cout<<c.calcArea();

//----------------
geoShape *ptr;
//ptr = new square;
ptr= new rectangle;
ptr = new triangle;
ptr->setdemintion1(5);
//ptr= new circle;
    return 0;
}
