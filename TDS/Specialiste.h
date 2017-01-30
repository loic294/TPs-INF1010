/**********************************************
* Titre: Travail pratique #1 - Personnel.h
* Date: 31 janvier 2017
* Auteur: Julien Bergeron et Loic Bellemare-Alford (1846135)
*********************************************/

#ifndef SPECIALITE_H
#define SPECIALITE_H

#include <string>

using namespace std;

class Specialiste
{
public:
	// Constructeurs par defaut et par parametre
	Specialiste();
	Specialiste(string domaine, int niveau);

	// Methodes d'acces
	string obtenirDomaine() const;
	int obtenirNiveau() const;

	// Methodes de modification
	void modifierDomaine(string domaine);
	void modifierNiveau(int niveau);


private:

	// Variables privees
	string domaine_;
	int niveau_;

};

#endif