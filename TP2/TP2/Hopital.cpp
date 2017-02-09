/********************************************
* Titre: Travail pratique #2 - Hopital.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Hopital.h"
#include "Personnel.h"
#include "Const.h"
#include <iostream>
#include <iomanip>


Hopital::Hopital(const std::string& nom, Personnel* personnel): nom_(nom), personnel_(personnel)
{
}


Hopital::~Hopital()
{
}

std::string Hopital::obtenirNom() const
{
	return nom_;
}

Personnel* Hopital::obtenirPersonnel()
{
	return personnel_;
}


void Hopital::modifierNom(const std::string & nom)
{
	nom_ = nom;
}

void Hopital::modifierPersonnel(Personnel* personnel)
{
	personnel_ = personnel;
}



std::ostream& operator<<(std::ostream& o, Hopital& hopital) {
	o << std::setfill(' ') << endl << endl;
	o << std::setw(60) << hopital.obtenirNom() << "" << endl;
	o << std::setfill('=') << std::setw(100) << "" << endl << endl;
	hopital.obtenirPersonnel()->information();
	return o;
}