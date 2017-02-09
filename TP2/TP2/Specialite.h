/********************************************
* Titre: Travail pratique #2 - Specialite.h
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#ifndef SPECIALITE_H
#define SPECIALITE_H

#include <string>
#include <iostream>

class Specialite
{
public:
	Specialite();

	Specialite(const std::string& domaine, unsigned int niveau);

	std::string obtenirDomaine() const;
	unsigned int obtenirNiveau() const;

	void modifierDomaine(const std::string& domaine);
	void modifierNiveau(unsigned int niveau);

	void information(); // A MODIFIER... (si necessaire) 

	friend std::ostream& operator<<(std::ostream& o, const Specialite& specialite);

	// _________TP2___________
private:
	std::string domaine_;
	unsigned int niveau_;
};

#endif