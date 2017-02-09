/********************************************
* Titre: Travail pratique #2 - Hopital.h
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#ifndef HOPITAL_H
#define HOPITAL_H

#include <string>
#include <iostream>
#include "Personnel.h"

class Hopital
{
public:

	Hopital(const std::string& nom, Personnel* personnel); // A MODIFIER... (si necessaire)
	~Hopital(); // A MODIFIER... (si necessaire)

	std::string obtenirNom() const;
	Personnel* obtenirPersonnel();

	void modifierNom(const std::string& nom);
	void modifierPersonnel(Personnel* personnel);

	friend std::ostream& operator<<(std::ostream& o, Hopital& hopital);


private:
	std::string nom_;
	Personnel* personnel_;
};

#endif
