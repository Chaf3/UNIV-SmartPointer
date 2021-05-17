/*!
 * \file COO_Object.h
 * \brief Header de la classe COOObject
 * \author Alexandre Chafaux
 * \version 1.0
 */

#ifndef COO_PROJET_COOOBJECT_H
#define COO_PROJET_COOOBJECT_H

#include <iostream>
#include "COO_References.h"

/*! \class COOObject
  * \brief Classe représentant un COOObject
  * Cette classe est abstraite et oblige la redéfinition de la fonction toString dans les classes dérivées.
  *
  */

class COOObject {
    int nb_references;
    template<typename T> friend COOReferences<T>::COOReferences(T* Object);
    template<typename T> friend COOReferences<T>::~COOReferences();
public:

    /*!
     *  \brief Constructeur COOObject
     *  Constructeur de la classe COOObjct
     */

    COOObject();

    /*!
     *  \brief Destructeur COOObject
     *  On précise le type virtual car on va effectuer de l'héritage avec cette classe.
     */
    virtual ~COOObject();

    /*!
   *  \brief Méthode toString.
   *  Méthode qui va permettre d'afficher les informations concernant une classe.
   *  Cette méthode est virtuelle pure et
   */

    virtual std::string toString() const = 0;

    /*!
   *  \brief Méthode hashCode
   *  Méthode qui permet d'identifier l'objet qui l'utilise.
   */
    inline long hashCode() const {
        return reinterpret_cast<long>(this);
    }
    /*!
   *  \brief Méthode inc_nb_references()
   *  Incrémente de 1 le nombre de référence sur COOObject.
   */
    inline void inc_nb_references() {
        this->nb_references +=1;
    }
    /*!
   *  \brief Méthode dec_nb_references()
   *  Décrémente de 1 le nombre de référence sur COOObject.
   */
    inline void dec_nb_references() {
        this->nb_references -= 1;
    }
};


#endif //COO_PROJET_COOOBJECT_H