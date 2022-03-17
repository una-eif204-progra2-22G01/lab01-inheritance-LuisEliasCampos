//
// Created by Usuario on 16/3/2022.
//

#include "Derived1.h"
#include "Derived2.h"
int main(){

    Derived1 deri1("1");
    Derived2 deri2("2");

    deri1.doSomething();
    cout<<deri2.toString()<<endl;
    cout<<"--------------"<<endl;
    deri2.doSomething();
    cout<<deri2.toString()<<endl;

    return 0;
}
