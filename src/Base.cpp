//
// Created by Usuario on 16/3/2022.
//

#include "Base.h"
Base:: Base(string a){
    nom=a;
}
void Base::setNom(string a) {
    nom =a;
}
string Base::getNom() {
    return nom;
}
void Base::doSomething() {
    cout<<" Base "<<endl;
}

Base::~Base(){

}