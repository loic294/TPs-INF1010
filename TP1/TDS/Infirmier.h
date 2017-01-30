/********************************************
* Titre: Travail pratique #1 - Infirmier.h
* Date: 31 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#ifndef INFIRMIER_H
#define INFIRMIER_H


#include <string>

class Infirmier
{
public:
	// Constructeur par defaut et par param�tres
	Infirmier();
	Infirmier(std::string nom, std::string prenom, int nbChambres);

	// Destructeur
	~Infirmier();

	// Methodes d'acces
	std::string obtenirNom() const; // NOTE : Les m�thodes d'acc�s doivent �tre constante (interdire l'�criture)
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

