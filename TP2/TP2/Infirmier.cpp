/********************************************
* Titre: Travail pratique #2 - Infirmier.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Infirmier.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

Infirmier::Infirmier()
{
}

Infirmier::Infirmier(const std::string & nom, const std::string & prenom, unsigned int nbChambre): nom_(nom), prenom_(prenom), nbChambre_(nbChambre)
{
}


Infirmier::~Infirmier()
{
}

std::string Infirmier::obtenirNom() const
{
	return nom_;
}

std::string Infirmier::obtenirPrenom() const
{
	return prenom_;
}

std::string Infirmier::obtenirNomComplet() const
{
	return prenom_ + " " + nom_;
}

unsigned int Infirmier::obtenirNbChambre() const
{
	return nbChambre_;
}

void Infirmier::modifierNom(const std::string & nom)
{
	nom_ = nom;
}

void Infirmier::modifierPrenom(const std::string & prenom)
{
	prenom_ = prenom;
}

void Infirmier::modifierNbChambre(unsigned int nbChambre)
{
	nbChambre_ = nbChambre;
}

void Infirmier::information() // A MODIFIER... (si necessaire) DONE!
{

	std::cout << "| " << obtenirNomComplet() << AFFICHER_ESPACE(espace_nom - obtenirNomComplet().size());
	std::cout << " | " << AFFICHER_ESPACE(espace_chambre - std::to_string(nbChambre_).size()/2);
	std::cout << nbChambre_ << AFFICHER_ESPACE(espace_chambre);
	std::cout << "|" << std::endl;

}

bool Infirmier::operator==(const Infirmier& infirmier) const {
	return this->obtenirNomComplet() == infirmier.obtenirNomComplet();
}

bool Infirmier::operator==(const std::string& nomComplet) const {
	return this->obtenirNomComplet() == nomComplet;
};

bool operator==(const std::string& nomComplet, const Infirmier& infirmier) {
	return infirmier.obtenirNomComplet() == nomComplet;
};

std::ostream& operator<<(std::ostream& o, Infirmier& infirmier) {
	return o;
}