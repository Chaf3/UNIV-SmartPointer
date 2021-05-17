/*!
 * \file COOObject.cpp
 * \brief Fichier pour la définition des fonctions de la classe COOObject.h
 * \author Alexandre Chafaux
 * \version 1.0
 */
#include <sstream>
#include "../includes/COO_Object.h"


/************ Définition des fonctions de la classe COOObject ******************************************/

COOObject::COOObject() : nb_references(0) {}

COOObject::~COOObject() {

    std::cout<< "Destruction du COObject" << std::endl;

}