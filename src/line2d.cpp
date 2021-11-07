#include <line2d.h>
#include <iostream>
#include <cmath>
float line2d::get_ang() const
{
    return _ang;
}
line2d::line2d()
:base2d(),_p(),_ang(0)
{
    // std::cout << this << " line2d() " << "\n";
}
line2d::line2d(const point2d& p,float ang)
:base2d(),_p(p),_ang(ang)
{
    // std::cout << this << " line2d(const point2d& p,float ang) " << "\n";
}
line2d::line2d(const line2d& a)
:base2d(),_p(a._p),_ang(a._ang)
{
    // std::cout << this << " line2d(const line2d& a) " << "\n";
}
void line2d::print()const
{
    std::cout << "line " << _p.get_x() << " " << _p.get_y() << " " << _ang << "\n";
}