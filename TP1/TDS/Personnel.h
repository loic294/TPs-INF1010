/********************************************
* Titre: Travail pratique #1 - Medecin.cpp
* Date: 31 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford
*******************************************/

#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <string>
#include <string>

#include "Medecin.h"
#include "Infirmier.h"

using namespace std;

class Personnel
{
public:
	// Constructeur par defaut
	Personnel();

	// Destructeur
	~Personnel();

	// Methodes publiques
	void ajouterMedecin(Medecin& medecin);
	void ajouterInfirmier(Infirmier& infirmier);

	void afficherMedecins();
	void afficherInfirmiers();

private:

	// Variables privees
	Medecin*   tableauMedecins_;
	Infirmier* tableauInfirmiers_;

	unsigned int compteurMedecin_;
	unsigned int compteurInfirmier_;

	unsigned int capaciteTableauMedecins_;
	unsigned int capaciteTableauInfirmiers_;
};

#endif
