//
// Created by Usuario on 16/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H
#include "Base.h"

class Derived1: public Base {
private:
    string b;
public:
    Derived1(string,string="" );
    void setB(string);
    string getB();
    void doSomething() override;
    string toString();
    ~Derived1();
};


#endif //LAB01_INHERITANCE_DERIVED1_H
