//
// Created by Usuario on 16/3/2022.
//

#include "Derived1.h"
#include "Derived2.h"
int main(){

    Derived1 deri1("1");
    Derived2 deri2("2");

    deri1.doSomething();
    cout<<deri1.toString()<<endl;
    deri1.setB("primer derivada");
    cout<<deri1.getB()<<endl;
    cout<<"--------------"<<endl;
    deri2.doSomething();
    cout<<deri2.toString()<<endl;
    deri2.setC("segunda derivada");
    cout<<deri2.getC()<<endl;
    return 0;
}
