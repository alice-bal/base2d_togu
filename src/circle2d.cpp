#include <circle2d.h>
#include <iostream>
float circle2d::get_r() const
{
    return _r;
}
circle2d::circle2d()
:base2d(),_c(),_r(1)
{
    // std::cout << this << " circle2d()" << "\n";
}
circle2d::circle2d(const point2d& c,float r)
:base2d(),_c(c),_r(r)
{
    // std::cout << this << " circle2d(const point2d& c,float r)" << "\n";
}
circle2d::circle2d(const circle2d& f)
:base2d(),_c(f._c),_r(f._r)
{
    // std::cout << this << " circle2d(const circle2d& f)" << "\n";
}
void circle2d::print()const
{
    std::cout << "circle " << _c.get_x() << " " << _c.get_y() << " " << _r << "\n";
}