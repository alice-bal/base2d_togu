#pragma once
#include <point2d.h>
class circle2d:public base2d
{
    private:
    point2d _c;
    float _r;
    public:
    circle2d();                        //конструктор по умолчанию
    circle2d(const point2d& c,float r);//конструктор с параметрами 
    circle2d(const circle2d&);         //конструктор копирования
    
    void print() const override; 
    float get_r() const; 

    ~circle2d()
    {
        //std::cout << "Destructing circle2d\n";
    }
};