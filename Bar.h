//
// Created by JiangChao on 2019-04-26.
//

#ifndef TEST_CATCH_FRAMEWORK_BAR_H
#define TEST_CATCH_FRAMEWORK_BAR_H


#include <string>
#include <ostream>

class Bar
{
private:
    std::string name;
    std::string val;

public:
    Bar();

    const std::string &getName() const;

    const std::string &getVal() const;

    void setName(const std::string &name);

    void setVal(const std::string &val);

    bool operator==(const Bar &rhs) const;

    bool operator!=(const Bar &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const Bar &bar);
};


#endif //TEST_CATCH_FRAMEWORK_BAR_H
