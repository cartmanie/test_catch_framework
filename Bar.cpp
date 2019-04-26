//
// Created by JiangChao on 2019-04-26.
//

#include "Bar.h"

#include "testsuites/catch.hpp"

Bar::Bar()
{

}

const std::string &Bar::getName() const
{
    return name;
}

const std::string &Bar::getVal() const
{
    return val;
}

void Bar::setName(const std::string &name)
{
    Bar::name = name;
}

void Bar::setVal(const std::string &val)
{
    Bar::val = val;
}


bool Bar::operator==(const Bar &rhs) const
{
    return name == rhs.name &&
           val == rhs.val;
}

bool Bar::operator!=(const Bar &rhs) const
{
    return !(rhs == *this);
}


std::ostream &operator<<(std::ostream &os, const Bar &bar)
{
    os << "name: " << bar.name << " val: " << bar.val;
    return os;
}

