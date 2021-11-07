#pragma once
#include <2dprimitive.h>
class point2d:public base2d
{
    private:
    float _x;
    float _y;

    public:
    point2d();              //конструктор по умолчанию
    point2d(float,float);   //конструктор с параметрами
    point2d(const point2d&);//конструктор копирования

    float get_x() const;
    float get_y() const;
    void print() const override;

    ~point2d()              //деструктор
    {
        //std::cout << "Destructing point2d\n";
    }
};
