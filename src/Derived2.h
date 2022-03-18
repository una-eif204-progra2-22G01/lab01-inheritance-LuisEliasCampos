//
// Created by Usuario on 16/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H
#include "Base.h"

class Derived2 :public Base{
private:
    string c;
public:
    Derived2(string ="",string="");
    void setC(string);
    string getC();
    void doSomething() override;
    string toString();
    ~Derived2();
};


#endif //LAB01_INHERITANCE_DERIVED2_H
