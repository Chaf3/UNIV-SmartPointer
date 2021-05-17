/*!
 * \file COO_Legacy_Class.cpp
 * \brief Fichier pour la définition des fonctions de la classe COO_Legacy_Class.h
 * \author Alexandre Chafaux
 * \version 1.0
 */
#include <sstream>
#include "../includes/COO_Legacy_Class.h"

using namespace std;


/************ Définition des fonctions de la classe COOString ******************************************/

COOString::COOString(string string): coos_string(string) {}


COOString::COOString(const COOString& tOS) {

    this->coos_string = tOS.coos_string;

}

COOString& COOString::operator=(const COOString OS){

    if(this != &OS){
        this->coos_string = OS.coos_string;
    }

    return *this;
}

COOString::~COOString() {

    cout << "Destruction l'objet COOString " << endl;

}

COOString COOString::operator+(const COOString OS) const{

    return COOString(this->coos_string + OS.coos_string);
}


std::string COOString::toString() const {

    std::ostringstream line;

    line << "COOString : " + std::to_string(this->hashCode()) << " Value : " << this->coos_string <<std::endl;

    return line.str();


}

/************ Définition des fonctions de la classe COOComplex ******************************************/

COOComplex::COOComplex(const double value) : cooc_value(value){}


COOComplex::COOComplex(const COOComplex& tOC) {

    this->cooc_value = tOC.cooc_value;
}

COOComplex::~COOComplex() {

    cout << "Destruction de l'objet COOComplex " << endl;
}


COOComplex COOComplex::operator+(const COOComplex OC) const {

    return COOComplex(this->cooc_value + OC.cooc_value);

}

COOComplex COOComplex::operator-(const COOComplex OC) const{
    return COOComplex(this->cooc_value - OC.cooc_value);
}

COOComplex& COOComplex::operator=(const COOComplex OC){
    if(this != &OC){
        this->cooc_value = OC.cooc_value;
    }

    return *this;
}


void COOComplex::affiche() {

    cout << this->toString();

}

std::string COOComplex::toString() const {

    std::ostringstream line;

    line << "COOComplex : " + std::to_string(this->hashCode()) << " Value :  " << this->cooc_value << std::endl;

    return line.str();
}



