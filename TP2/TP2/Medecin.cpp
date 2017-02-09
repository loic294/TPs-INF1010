/********************************************
* Titre: Travail pratique #2 - Medecin.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Medecin.h"
#include <iostream>
#include <iomanip>
#include "Const.h"


//Constructeur par paramètre
Medecin::Medecin(const string& nom): nom_(nom), horaires_(0)
{
}


/*
Construteur avec les paramètres pour la classe Mdecin
\param [in]		nom				Indique le nom
\param [in]		horaires		Indique l'horaire
\param [in]		uneSpecialiste	Indique un spécialité
*/
Medecin::Medecin(const string& nom, int horaires, Specialite* specialite): nom_(nom), horaires_(horaires), specialite_(specialite)
{
}

/*
Construteur avec les paramètres pour la classe Mdecin
\param [in]		nom				Indique le nom
\param [in]		horaires		Indique l'horaire
\param [in]		uneSpecialiste	Indique un spécialité
*/
Medecin::Medecin(const Medecin* medecin)
{
	nom_ = medecin->obtenirNom();
	horaires_ = medecin->obtenirHoraires();
	specialite_ = &medecin->obtenirSpecialite();
}


//destructeur
Medecin::~Medecin() 
{
	specialite_ = nullptr;
}


/*
Méthode pour obtenir l'attribut
\return nom_
*/
string Medecin::obtenirNom() const
{
	return nom_;
}

/*Méthode pour obtenir l'attribut
\return horaire_
*/
int Medecin::obtenirHoraires() const
{
	return horaires_;
}

/*
Méthode pour obtenir l'attribut
\return specialite_
*/
Specialite Medecin::obtenirSpecialite() const
{
	return *specialite_;
}

/*
Méthode pour modifier l'attribut
\param[in]	nom		Indique le nom
*/
void Medecin::modifierNom(const string& nom)
{
	nom_ = nom;
}

/*
Méthode pour obtenir l'attribut
\return horaire_
*/
void Medecin::modifierHoraires(int horaires)
{
	horaires_ = horaires;
}

/*
Méthode pour modifier l'attribut
\param[in]	uneSpecialiste		Indique une specialite
*/
void Medecin::modifierSpecialite(Specialite* specialite)
{
	specialite_ = specialite;
}

//Affiche les informations de la classe Medecin
void Medecin::information()
{
	std::cout << "| " << nom_ << AFFICHER_ESPACE(espace_nom - nom_.size());
	std::cout << " | " << AFFICHER_ESPACE(espace_horaires - std::to_string(horaires_).size()) << horaires_;
	std::cout << AFFICHER_ESPACE(espace_horaires);
	obtenirSpecialite().information();
	std::cout << endl;

}


bool Medecin::operator==(const Medecin& medecin) const {
	return this->obtenirNom() == medecin.obtenirNom();
}

bool Medecin::operator==(const std::string& nomComplet) const {
	return this->obtenirNom() == nomComplet;
};

bool operator==(const std::string& nom, const Medecin& medecin) {
	return medecin.obtenirNom() == nom;
};

std::ostream& operator<<(std::ostream& o, Medecin& medecin) {
	medecin.information();
	return o;
}

Medecin Medecin::operator=(const Medecin& medecin) const {
	return medecin;
}