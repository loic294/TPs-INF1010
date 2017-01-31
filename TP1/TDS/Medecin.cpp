/********************************************
 * Titre: Travail pratique #1 - Medecin.cpp
 * Date: 31 janvier 2017
 * Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
 *******************************************/

#include"Medecin.h"
#include "Specialiste.h"
#include<string>

 /*
 Constructeur par d�faut de la classe Medecin
 */
Medecin::Medecin() {
	nom_ = "inconnu";
	horaires_ = 0;
	specialite_ = nullptr;
}

/*
Construteur avec les param�tres pour la classe Mdecin
\param [in]		nom				Indique le nom
\param [in]		horaires		Indique l'horaire
\param [in]		uneSpecialiste	Indique un sp�cialit�
*/
Medecin::Medecin(string nom, int horaires, Specialiste* uneSpecialiste) {
	nom_ = nom;
	horaires_ = horaires;
	specialite_ = uneSpecialiste;
}


Medecin::~Medecin() {
	// Note : Comme la specialite est un pointeur qui est utilis� par la suite, il n'est pas supprim� ici.
	specialite_ = nullptr;
}

/*
M�thode pour obtenir l'attribut
\return nom_
*/
string Medecin::obtenirNom() const {
	return	nom_;
}

/*
M�thode pour obtenir l'attribut
\return specialite_
*/
Specialiste Medecin::obtenirSpecialiste() const { 
	return *specialite_;
}

/*
M�thode pour obtenir l'attribut
\return horaire_
*/
int Medecin::obtenirHoraires() const {
	return horaires_;
}

/*
M�thode pour modifier l'attribut
\param[in]	nom		Indique le nom
*/
void Medecin::modifierNom(string nom) {
	nom_ = nom;
}

/*
M�thode pour modifier l'attribut
\param[in]	uneSpecialiste		Indique un specialite
*/
void Medecin::modifierSpecialiste(Specialiste* uneSpecialiste) {
	specialite_ = uneSpecialiste;
}

/*
M�thode pour modifier l'attribut
\param[in]	horaire		Indique un horaire
*/
void Medecin::modifierHoraires(int horaire) {
	horaires_ = horaire;
}
