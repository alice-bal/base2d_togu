#pragma once
#include <iostream>

class base2d
{
    public:
    virtual void print() const = 0;

    ~base2d()
    {
        //std::cout << "Destructing base2d\n";
    }
};