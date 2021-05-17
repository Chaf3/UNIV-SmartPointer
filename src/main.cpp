/*!
 * \file main.cpp
 * \brief Main de test pour le projet de Conception Orientée Objet.
 * \author Alexandre Chafaux
 * \version 1.0
 */


#include "../includes/COO_Legacy_Class.h"


using namespace std;

int main() {

    cout << "Resultat execution : \n" << endl;

    cout << " ========= OBJET COOCOMPLEX ========= \n" << endl;

    COOReferences<COOComplex> coocobj1(new COOComplex(1));
    cout << "Affichage de l'objet complexe 1 : " << coocobj1 << endl;

    cout << " Creation de l'objet complexe 2." << endl;

    COOReferences<COOComplex> coocobj2 = coocobj1+coocobj1;
    cout << "Affichage de l'objet complexe 2 : " << coocobj2 << endl;
    cout << " Test fonction affiche " << endl;
    coocobj2->affiche();

    COOReferences<COOComplex> coocobj3(coocobj1+coocobj1);
    cout << "Affichage de l'objet complexe 3 : " << coocobj3 << endl;

    cout << " ========= OBJET COOCSTRING ========= \n" << endl;

    COOReferences<COOString> coosobj1(new COOString("Bonjour"));
    cout << "Affichage de l'objet string 1 : " << coosobj1 << endl;

    COOReferences<COOString> coosobj2(new COOString("WORLD"));
    cout << "Affichage de l'objet string 2 : " << coosobj2 << endl;

    COOReferences<COOString> coosobj3 = coosobj1+coosobj2;
    cout << "Affichage de l'objet string 3 : " << coosobj3 << endl;

    cout << " ========= FIN PROGRAMME ========= \n" << endl;
    cout << " ========= DESTRUCTION DES OBJETS =========\n " << endl;

    return 0;
}