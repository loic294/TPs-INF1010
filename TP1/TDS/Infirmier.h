/********************************************
* Titre: Travail pratique #1 - Infirmier.h
* Date: 10 janvier 2017
* Auteur:
*******************************************/

#ifndef INFIRMIER_H
#define INFIRMIER_H

#include <string>

using namespace std;

class Infirmier
{
public:
	// Constructeur par defaut et par paramètres
	Infirmier();
	Infirmier(string nom, string prenom, int nbChambres);

	// Destructeur
	~Infirmier();

	// Methodes d'acces
	std::string obtenirNom() const; // NOTE : Les méthodes d'accès doivent être constante (interdire l'écriture)
	std::string obtenirPrenom() const;
	int obtenirnbChambre() const;

	//methode de modif
	void modifierNom(std::string nom);
	void modifierPrenom(std::string prenom);
	void modifierNbChambre(int nbChambres);

private:
	// Variables privees
	std::string nom_;
	std::string prenom_;
	int nbChambre_;

};

#endif

