/*!
 * \file COO_References.h
 * \brief Header de la classe COOReferences
 * \author Alexandre Chafaux
 * \version 1.0
 */

#ifndef COO_PROJET_COOREFERENCES_H
#define COO_PROJET_COOREFERENCES_H


#include <iostream>

/******************************* COOReferences  *********************************************************/

/*! \class COOReferences<T>
  * \brief Classe représentant une COOReferences.
  * Il s'agit de la classe qui sert de références pour tous les objets COOObject ainsi que toutes les classes dérivées.
  * C'est une classe qui respecte un patron de classe où on supposera ici que le type T est un COOObject ou une classe dérivée.
  */

template <typename T> class COOReferences{

    T* object;

public:

    /*!
     *  \brief Constructeur de COOReferences<T>
     *  \param Object : L'objet à mettre en attribut.
     *  Constructeur de la classe COOReferences<T>
     */

    COOReferences<T>(T* Object);

    /*!
     *  \brief Destructeur de COOReferences<T>
     *  Destructeur de la classe COOReferences
     */

    ~COOReferences();

    /*!
     *  \brief Operateur " + "
     *  \param Ref : Une reférence vers l'objet que l'on est en train de manipuler.
     *  Cet opérateur fait appel à l'opérateur + des objets T passé en paramètre.
     *  \return COOReferences <T> : Une nouvelle référence de l'objet manipulé.
     */

    COOReferences<T> operator+(const COOReferences<T> &Ref) const;

    /*!
     *  \brief Operateur " - "
     *  \param Ref : Une reférence vers l'objet que l'on est en train de manipuler.
     *  Cet opérateur fait appel à l'opérateur - des objets T passé en paramètre. A l'évidence ici, des objets COOComplex.
     *  \return COOReferences <T> : Une nouvelle référence de l'objet manipulé.
     */

    COOReferences<T> operator-(const COOReferences<T> &Ref) const ;

    /*!
      *  \brief Operateur " -> "
      *  Redéfinition  de l'opérateur flèche. Renvoit un pointeur vers l'objet T en paramètre de la classe.
      *  \return T* : Un pointeur vers l'objet en paramètre.
      */

    T* operator->() const;

    /*!
     *  \brief Opératur " << "
     *  Permet de renvoyer des informations sur l'objet en attribut de la classe.
     *  \param Ref, os : Un flux de type ostream et une référence sur une COOReferences.
     *  \return os : Un flux contenant les informations de l'objet en attribut d'un COOReferences.
     */

    friend std::ostream& operator<<(std::ostream &os, const COOReferences<T>& Ref){

        os << (*(Ref.object)).toString();
        return os;
    }

};


template<class T>
COOReferences<T>::COOReferences(T *Object){

    this->object = Object;
    object->inc_nb_references();


}

template<class T>
COOReferences<T> COOReferences<T>::operator+(const COOReferences<T> &Ref) const {
    return COOReferences( new T( (*(this->object)) + (*(Ref.object)) ) );

}

template<class T>
COOReferences<T> COOReferences<T>::operator-(const COOReferences<T> &Ref) const {

    return COOReferences( new T( (*(this->object)) + (*(Ref.object)) ) ) ;

}

template<class T>
T* COOReferences<T>::operator->() const {

    return this->object;
}


template<class T>
COOReferences<T>::~COOReferences() {

    if(this->object->nb_references > 1){
        this->object->dec_nb_references();
    }else{
        delete this->object;
    }
}


#endif //COO_PROJET_COOREFERENCES_H