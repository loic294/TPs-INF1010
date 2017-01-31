/********************************************
* Titre: Travail pratique #1 - Medecin.cpp
* Date: 31 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Specialiste.h";

/*
Constructeur par défaut de la classe Specialiste
*/
Specialiste::Specialiste() {
	domaine_ = "inconnu";
	niveau_ = 0;
}

/*
Construteur avec les paramètres pour la classe Specialiste
\param [in]		domaine		Indique le domaine
\param [in]		niveau		Indique le niveau
*/
Specialiste::Specialiste(string domaine, int niveau) {
	domaine_ = domaine;
	niveau_ = niveau;
}

/*
Méthode pour obtenir l'attribut
\return domaine_
*/
string Specialiste::obtenirDomaine() const {
	return domaine_;
}

/*
Méthode pour obtenir l'attribut
\return niveau_
*/
int Specialiste::obtenirNiveau() const {
	return niveau_;
}

/*
Méthode pour modifier l'attribut
\param[in]	unDomaine	Indique un domaine
*/
void Specialiste::modifierDomaine(string unDomaine) {
	domaine_ = unDomaine;
}

/*
Méthode pour modifier l'attribut
\param[in]	unNiveau	Indique un niveau
*/
void Specialiste::modifierNiveau(int unNiveau) {
	niveau_ = unNiveau;
}

