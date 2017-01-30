/**********************************************
* Titre: Travail pratique #1 - Infirmier.cpp
* Date: 10 janvier 2017
* Auteur:
*********************************************/


#include "Infirmier.h"

Infirmier::Infirmier() {
	prenom_ = "inconnu";
	nom_ = "inconnu";
	nbChambre_ = 0;
}

Infirmier::Infirmier(string nom, string prenom, int nbChambres) {
	prenom_ = prenom;
	nom_ = nom;
	nbChambre_ = nbChambres;
}

Infirmier::~Infirmier() {
	//????????????????????????????????????????????????????????
}

std::string Infirmier::obtenirPrenom() const {
	return prenom_;
}

std::string Infirmier::obtenirNom() const {
	return nom_;
}

int Infirmier::obtenirnbChambre() const {
	return nbChambre_;
}

void Infirmier::modifierPrenom(std::string unPrenom) {
	nom_ = unPrenom;
}

void Infirmier::modifierNom(std::string unNom) {
	prenom_ = unNom;
}

void Infirmier::modifierNbChambre(int unNbChambres) {
	nbChambre_ = unNbChambres;
}

