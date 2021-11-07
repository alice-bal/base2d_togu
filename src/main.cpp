#include <iostream>
#include <circle2d.h>
#include <line2d.h>
#include <vector>

int main ()
{
    std::vector<const base2d*> p;
    point2d p1;
    p.push_back(&p1);
    const point2d p2(4,5);
    p.push_back(&p2);
    const point2d p3(p2);
    p.push_back(&p3);
    
    circle2d c1;
    p.push_back(&c1);
    const float r = 0.5;
    circle2d c2(p2,r);
    p.push_back(&c2);
    const circle2d c3(c2);
    p.push_back(&c3);

    line2d l1;
    p.push_back(&l1);
    const float ang = 0.7;
    const line2d l2(p2,ang);
    p.push_back(&l2);
    const line2d l3(l2);
    p.push_back(&l3);
    
    for (auto it = p.begin();it != p.end();it++)
    {
        const base2d*i = *it;
        i->print();        
    }
    return 0;
}