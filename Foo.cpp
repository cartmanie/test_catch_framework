//
// Created by JiangChao on 2019-04-26.
//

#include "Foo.h"


Foo::Foo() : a(0),
             b(0),
             c(0)
{

}

int Foo::getA() const
{
    return a;
}

int Foo::getB() const
{
    return b;
}

int Foo::getC() const
{
    return c;
}

void Foo::setA(int a)
{
    Foo::a = a;
}

void Foo::setB(int b)
{
    Foo::b = b;
}

void Foo::setC(int c)
{
    Foo::c = c;
}

bool Foo::operator==(const Foo &rhs) const
{
    return a == rhs.a &&
           b == rhs.b &&
           c == rhs.c;
}

bool Foo::operator!=(const Foo &rhs) const
{
    return !(rhs == *this);
}

bool Foo::operator<(const Foo &rhs) const
{
    if (a < rhs.a)
        return true;
    if (rhs.a < a)
        return false;
    if (b < rhs.b)
        return true;
    if (rhs.b < b)
        return false;
    return c < rhs.c;
}

bool Foo::operator>(const Foo &rhs) const
{
    return rhs < *this;
}

bool Foo::operator<=(const Foo &rhs) const
{
    return !(rhs < *this);
}

bool Foo::operator>=(const Foo &rhs) const
{
    return !(*this < rhs);
}

std::ostream &operator<<(std::ostream &os, const Foo &foo)
{
    os << "a: " << foo.a << " b: " << foo.b << " c: " << foo.c;
    return os;
}

