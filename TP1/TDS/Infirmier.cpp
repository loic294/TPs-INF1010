/**********************************************
* Titre: Travail pratique #1 - Infirmier.cpp
* Date: 10 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*********************************************/


#include "Infirmier.h"

/*
Constructeur par défaut de la classe Infirmier
*/
Infirmier::Infirmier() {
	prenom_ = "inconnu";
	nom_ = "inconnu";
	nbChambre_ = 0;
}

/*
Construteur avec les paramètres pour la classe Infirmier
\param [in]		nom			Indique le nom
\param [in]		prenom		Indique le prenom
\param [in]		nbChambres	Indique le nombre de chambres
*/
Infirmier::Infirmier(std::string nom, std::string prenom, int nbChambres) {
	prenom_ = prenom;
	nom_ = nom;
	nbChambre_ = nbChambres;
}

/*
Destructeur de la classe Infirmier. Il est vide puisqu'il n'y a pas de pointeurs en attribut 
*/
Infirmier::~Infirmier() {
	
}

/*
Méthode pour obtenir l'attribut
\return prenom_
*/
std::string Infirmier::obtenirPrenom() const {
	return prenom_;
}

/*
Méthode pour obtenir l'attribut
\return nom_
*/
std::string Infirmier::obtenirNom() const {
	return nom_;
}

/*
Méthode pour obtenir l'attribut
\return nbChambre_
*/
int Infirmier::obtenirnbChambre() const {
	return nbChambre_;
}

/*
Méthode pour modifier l'attribut
\param [in]		prenom		Indique le prenom
*/
void Infirmier::modifierPrenom(std::string unPrenom) {
	nom_ = unPrenom;
}

/*
Méthode pour modifier l'attribut
\param [in]		nom		Indique le nom
*/
void Infirmier::modifierNom(std::string unNom) {
	prenom_ = unNom;
}

/*
Méthode pour modifier l'attribut
\param [in]		nbChambre		Indique le nombre de chambres
*/
void Infirmier::modifierNbChambre(int unNbChambres) {
	nbChambre_ = unNbChambres;
}

