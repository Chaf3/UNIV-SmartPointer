UNIV-SmartPointer - Projet universitaire de l'année 2019-2020, où le but du jeu était de reproduire le comportement des " pointeurs intelligents " C++, sans les utiliser. 

L'intégralité du projet a été réalisé via l'IDE CLion. 

**********************************************************************************************
				                ARCHITECTURE DU PROJET
**********************************************************************************************

L'architecture de l'archive se décrit ainsi :

	- Un repertoire " src " qui contient tous les .cpp du projet.
	- Un repertoire " includes " qui contient tous les headers. 
	- Un repertoire " test " qui contient les quelques tests unitaires fait sur le projet. 
	- Un makefile qui contient quatre ligne de commandes pour vous faciliter la vie. 

**********************************************************************************************
					                SCRIPT DE TEST 
**********************************************************************************************

Pour lancer le programme, mettez vous à la racine du repertoire et dans un terminal, tapez la commande : make compile. 
Un exécutable nommé " exec_projet " sera produit et il suffira de le lancer pour obtenir le résultat liée à la compilation des fichiers .cpp. 

Pour effacer cette executable, il suffit de tapez la commande : make clean_exec

Pour voir un aperçu des tests unitaires, même chose. A la racine du repertoire " PROJET ", tapez la commande : make test_u. 
Un exécutable nommé " batterie_test " sera produit et il suffira de le lancer pour obtenir le résultat des quelques tests effectués. 

Pour effacer cette executable, il suffit de taper la commande : make clean_test
=======

