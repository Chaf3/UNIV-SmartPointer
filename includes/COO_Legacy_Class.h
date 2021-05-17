/*!
 * \file COO_Legacy_Class.h
 * \brief Header des classes heritant de la classe COOObject.
 * \author Alexandre Chafaux
 * \version 1.0
 */

#ifndef COO_PROJET_COOLEGACYCLASS_H
#define COO_PROJET_COOLEGACYCLASS_H

#include "COO_Object.h"

#include <iostream>

using namespace std;


/******************************* COOString *********************************************************/

/*! \class COOString : public COOObject
  * \brief Classe représentant un COOString. C'est une classe dérivée de COOObject.
  * Elle contient un attribut qui est une chaine de caractères. Elle redéfinit l'opérateur +.
  * Cette classe doit respecter la forme canonique car on va l'allouer dynamiquement plus tard.
  */

class COOString : public COOObject {

    string coos_string;

public:

    /*!
     *  \brief Constructeur COOOString
     *  \param string : la valeur à mettre sur l'attribut coos_tring
     *  Constructeur de la classe COOString
     */

    COOString(string string);

    /*!
     *  \brief Constructeur par défaut de COOString
     *  \param  tOS : Une référence sur un COOString.
     *  Constructeur  par défaut présent pour respecter la forme canonique.
     */

    COOString(const COOString& tOS);

    /*!
     *  \brief Opérateur =
     *  \param OS : Un objet COOString
     *  Operateur " = " à redéfinir pour respecter la forme canonique.
     *  \return COOString& : Une reférence sur un objet COOString.
     */

    COOString& operator=(const COOString OS);

    /*!
     *  \brief Destructeur COOString
     *  Destructeur de la classe COOString
     */

    ~COOString();

    /*!
     *  \brief Méthode ToString
     *  Méthode qui va afficher les données relatives à la classe COOObject. Elle utilise la méthode hashCode.
     */

    std::string toString() const;

    /*!
     *  \brief Opérateur "+"
     *  \param OS : Un objet COOString
     *  Redéfinition de l'opérateur + pour répondre à la consigne du sujet.
     *  \return COOString : Un nouvel objet COOString.
     */

    COOString operator+(const COOString OS) const;


};


/******************************* COOComplex *********************************************************/


/*! \class COOComplex : public COOObject
  * \brief Classe représentant un COOComplex. C'est une classe dérivée de COOObject.
  * Elle contient un attribut qui est un double. Elle redéfinit l'opérateur + et l'opérateur -, et respecte la forme canonique.
  *
  */

class COOComplex : public COOObject {

    double cooc_value;

public:

    /*!
   *  \brief Constructeur de l'objet COOComplex
   *  \param value : valeur du double à donner à l'attribut cooc_value.
   *
   */

    COOComplex(double value);

    /*!
   *  \brief Constructeur par défaut de COOComplex
   *  \param tOC : Reférence vers un objet COOComplex
   *  Constructeur par défaut présent pour respecter la forme canonique.
   */
    COOComplex(const COOComplex& tOC);

    /*!
   *  \brief Destructeur de la classe COOComplex
   *
   */
    ~COOComplex();

    /*!
   *  \brief Opérateur +
   *  \param OC : Un Objet COOComplex. Const car on ne le modifiera pas.
   *  Méthode qui va additionner les valeurs des deux attributs des objets qui utilise l'opérateur.
   *  \return COOComplex : Retourne un nouvel objet COOComplex.
   */
    COOComplex operator+(const COOComplex OC) const;

    /*!
   *  \brief Méthode ToString
     *  \param OC : Un objet COOComplex. Const car on ne le modifiera pas
   *  Méthode qui va soustraire les valeurs des deux attributs des objets qui utilise l'opérateur.
     *  \return COOComplex : un nouvel objet COOComplex.
   */
    COOComplex operator-(const COOComplex OC) const ;

    /*!
   *  \brief Méthode ToString
   *  \param OC : Un objet de type COOComplex. Const car on ne le modifiera pas
   *  Opérateur présent pour respecter la forme canonique.
   *  return COOComplex& : Une référence vers un objet COOComplex.
   */

    COOComplex&  operator=(const COOComplex OC);

    /*!
   *  \brief Méthode toString
   *  Méthode qui va afficher les données relatives à la classe COOOComplex. Elle utilise la méthode hashCode.
   */
    std::string toString() const;

    /*!
   *  \brief Méthode affiche
   *  Méthode qui est présente uniquement pour le déboguage. Elle utilise la fonction toString déclarer précédemment.
   */
    void affiche();

};



#endif //COO_PROJET_COOLEGACYCLASS_H