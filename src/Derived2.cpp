//
// Created by Usuario on 16/3/2022.
//

#include "Derived2.h"


Derived2::Derived2(string a):Base(a) {

}
void Derived2::doSomething() {
    cout<<"Derived2"<<endl;
}
string Derived2::toString() {
    stringstream s;
    s<<" nombre: "<< nom <<endl;
    return s.str();
}


Derived2::~Derived2() {

}