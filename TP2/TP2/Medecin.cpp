/********************************************
* Titre: Travail pratique #1 - Medecin.cpp
* Date: 31 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Medecin.h"
#include <iostream>
#include <iomanip>
#include "Const.h"


//Constructeur par param�tre
Medecin::Medecin(const string& nom): nom_(nom), horaires_(0)
{
}


/*
Construteur avec les param�tres pour la classe Mdecin
\param [in]		nom				Indique le nom
\param [in]		horaires		Indique l'horaire
\param [in]		uneSpecialiste	Indique un sp�cialit�
*/
Medecin::Medecin(const string& nom, int horaires, Specialite* specialite): nom_(nom), horaires_(horaires), specialite_(specialite)
{
}


//destructeur
Medecin::~Medecin() 
{
	specialite_ = nullptr;
}


/*
M�thode pour obtenir l'attribut
\return nom_
*/
string Medecin::obtenirNom() const
{
	return nom_;
}

/*M�thode pour obtenir l'attribut
\return horaire_
*/
int Medecin::obtenirHoraires() const
{
	return horaires_;
}

/*
M�thode pour obtenir l'attribut
\return specialite_
*/
Specialite Medecin::obtenirSpecialite() const
{
	return *specialite_;
}

/*
M�thode pour modifier l'attribut
\param[in]	nom		Indique le nom
*/
void Medecin::modifierNom(const string& nom)
{
	nom_ = nom;
}

/*
M�thode pour obtenir l'attribut
\return horaire_
*/
void Medecin::modifierHoraires(int horaires)
{
	horaires_ = horaires;
}

/*
M�thode pour modifier l'attribut
\param[in]	uneSpecialiste		Indique une specialite
*/
void Medecin::modifierSpecialite(Specialite* specialite)
{
	specialite_ = specialite;
}

//Affiche les informations de la classe Medecin
void Medecin::information() const
{
	std::cout << "| " << nom_ << AFFICHER_ESPACE(espace_nom - nom_.size());
	std::cout << " | " << AFFICHER_ESPACE(espace_horaires - std::to_string(horaires_).size()) << horaires_;
	std::cout << AFFICHER_ESPACE(espace_horaires);
	obtenirSpecialite().information();
	std::cout << endl;
}