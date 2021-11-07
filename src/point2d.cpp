#include <point2d.h>
#include <iostream>
#include <cmath>
float point2d::get_x() const 
{
    return this->_x;
}
float point2d::get_y() const
{
    return this->_y;
}
point2d::point2d()
:base2d(),_x(0),_y(1)
{
    // std::cout << this << " point2d()" << "\n";
}
point2d::point2d(float x,float y)
:base2d(),_x(x),_y(y)
{
    // std::cout << this << " point2d(float x,float y)" "\n";
}
point2d::point2d(const point2d& o)
:base2d(),_x(o._x),_y(o._y)
{
    // std::cout << this << " point2d(const point2d& o)" << "\n";
}
void point2d::print()const 
{
    std::cout << "point " << _x << " " << _y << "\n";
}