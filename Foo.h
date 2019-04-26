//
// Created by JiangChao on 2019-04-26.
//

#ifndef TEST_CATCH_FRAMEWORK_FOO_H
#define TEST_CATCH_FRAMEWORK_FOO_H


#include <ostream>


class Foo
{
private:
    int a;
    int b;
    int c;
public:
    int getA() const;

    int getB() const;

    int getC() const;

    Foo();

    void setA(int a);

    void setB(int b);

    void setC(int c);

    bool operator==(const Foo &rhs) const;

    bool operator!=(const Foo &rhs) const;

    bool operator<(const Foo &rhs) const;

    bool operator>(const Foo &rhs) const;

    bool operator<=(const Foo &rhs) const;

    bool operator>=(const Foo &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const Foo &foo);
};




#endif //TEST_CATCH_FRAMEWORK_FOO_H
