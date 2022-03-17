//
// Created by Usuario on 16/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H
#include <iostream>
#include <sstream>
using namespace std;

class Base {
protected:
    string nom;
public:
    Base(string );
    void setNom(string);
    string getNom();
    virtual void doSomething();
    virtual string toString ()=0;
    ~Base();
};


#endif //LAB01_INHERITANCE_BASE_H
