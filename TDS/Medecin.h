/********************************************
* Titre: Travail pratique #1 - Medecin.cpp
* Date: 31 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#ifndef MEDECIN_H
#define MEDECIN_H

#include <string>
#include "Specialiste.h"

using namespace std;

class Medecin
{
public:
	// Constructeurs par defaut et par parametre
	Medecin();
	Medecin(string nom, int horaires, Specialiste* uneSpecialiste);

	//destructeur
	~Medecin();

	// Methodes d'acces
	string obtenirNom() const;
	int obtenirHoraires() const;
	Specialiste obtenirSpecialiste() const;

	// Methodes de modification
	void modifierNom(string nom);
	void modifierHoraires(int horaires);
	void modifierSpecialiste(Specialiste* specialite);


private:

	// Variables privees
	string nom_;
	int horaires_;
	Specialiste* specialite_;
};

#endif
