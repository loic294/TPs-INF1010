/********************************************
* Titre: Travail pratique #2 - Specialite.cpp
* Date: 31 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Specialite.h"
#include <iostream>
#include <iomanip>
#include "Const.h"


/*
Constructeur par d�faut de la classe Specialiste
*/
Specialite::Specialite()
{
}


/*
Construteur avec les param�tres pour la classe Specialiste
\param [in]		domaine		Indique le domaine
\param [in]		niveau		Indique le niveau
*/
Specialite::Specialite(const std::string & domaine, unsigned int niveau): domaine_(domaine), niveau_(niveau)
{
}

/*
M�thode pour obtenir l'attribut
\return domaine_
*/
std::string Specialite::obtenirDomaine() const
{
	return domaine_;
}

/*
M�thode pour obtenir l'attribut
\return niveau_
*/
unsigned int Specialite::obtenirNiveau() const
{
	return niveau_;
}

/*
M�thode pour modifier l'attribut
\param[in]	unDomaine	Indique un domaine
*/
void Specialite::modifierDomaine(const std::string & domaine)
{
	domaine_ = domaine;
}

/*
M�thode pour modifier l'attribut
\param[in]	unNiveau	Indique un niveau
*/
void Specialite::modifierNiveau(unsigned int niveau)
{
	niveau_ = niveau;
}


/*
Affiche les informations sur la specialite
*/
void Specialite::information()
{
	std::cout << " | " << domaine_  << AFFICHER_ESPACE(espace_domaine - domaine_.size());
	std::cout << " | " << AFFICHER_ESPACE(espace_niveau - std::to_string(niveau_).size()) << niveau_;
	std::cout << AFFICHER_ESPACE(espace_niveau) << " | ";

}

std::ostream& operator<<(std::ostream& o, Specialite& specialiste) {
	return o;
}