/********************************************
* Titre: Travail pratique #1 - Medecin.cpp
* Date: 31 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Specialiste.h";

Specialiste::Specialiste() {
	domaine_ = "inconnu";
	niveau_ = 0;
}

Specialiste::Specialiste(string domaine, int niveau) {
	domaine_ = domaine;
	niveau_ = niveau;
}

string Specialiste::obtenirDomaine() const {
	return domaine_;
}

int Specialiste::obtenirNiveau() const {
	return niveau_;
}

void Specialiste::modifierDomaine(string unDomaine) {
	domaine_ = unDomaine;
}

void Specialiste::modifierNiveau(int unNiveau) {
	niveau_ = unNiveau;
}

