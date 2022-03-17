//
// Created by Usuario on 16/3/2022.
//

#include "Derived1.h"

Derived1::Derived1(string a):Base(a) {

}
void Derived1::doSomething() {
    cout<<"Derived1"<<endl;
}
string Derived1::toString() {
    stringstream s;
    s<<" nombre: "<<nom<<endl;
    return s.str();
}


Derived1::~Derived1() {

}