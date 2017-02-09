/********************************************
* Titre: Travail pratique #2 - Medecin.h
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#ifndef MEDECIN_H
#define MEDECIN_H

#include <string>
#include "Specialite.h"

using namespace std;

class Medecin 
{
public:
	// Constructeurs par parametre
	Medecin(const string& nom); // A MODIFIER... (si necessaire)
	Medecin(const Medecin* medecin); // A MODIFIER... (si necessaire)
	Medecin(const string& nom, int horaires, Specialite* specialite); // A MODIFIER... (si necessaire)
	// Destructeur
	~Medecin(); // A MODIFIER... (si necessaire)
	
	// Methodes d'acces
	string obtenirNom() const;
	int obtenirHoraires() const;
	Specialite obtenirSpecialite() const;
	
	// Methodes de modification
	void modifierNom(const string& nom);
	void modifierHoraires(int horaires);
	void modifierSpecialite(Specialite* specialite);
	
	void information(); // A MODIFIER... (si necessaire)

	bool operator==(const Medecin& infirmier) const;
	bool operator==(const std::string& nomComplet) const;
	friend bool operator==(const std::string& nom, const Medecin& infirmier);

	friend std::ostream& operator<<(std::ostream& o, const Medecin& infirmier);

	Medecin operator=(const Medecin& infirmier) const;

private:
	// Variables privees
	string nom_;
	int horaires_;
	Specialite* specialite_;
	
};

#endif