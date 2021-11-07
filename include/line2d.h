#pragma once
#include <point2d.h>
class line2d:public base2d
{
    private:
    point2d _p;
    float _ang;  //угол наклона к OX

    public:
    line2d();                     //конструктор по умолчанию
    line2d(const point2d&,float); //конструктор с параметрами
    line2d(const line2d&);        //конструктор копирования

    void print() const override; 
    float get_ang() const;

    ~line2d()
    {
        //std::cout << "Destructing line2d\n";
    }
};