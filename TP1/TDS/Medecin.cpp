/********************************************
 * Titre: Travail pratique #1 - Medecin.cpp
 * Date: 31 janvier 2017
 * Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
 *******************************************/

#include"Medecin.h"
#include "Specialiste.h"
#include<string>

Medecin::Medecin() {
	nom_ = "inconnu";
	horaires_ = 0;
	specialite_ = nullptr;
}

Medecin::Medecin(string nom, int horaires, Specialiste* uneSpecialiste) {
	nom_ = nom;
	horaires_ = horaires;
	specialite_ = uneSpecialiste;
}


Medecin::~Medecin() {
	//delete specialite_;
	//specialite_ = nullptr;
}

string Medecin::obtenirNom() const {
	return	nom_;
}

Specialiste Medecin::obtenirSpecialiste() const { 
	return *specialite_;
}

int Medecin::obtenirHoraires() const {
	return horaires_;
}

void Medecin::modifierNom(string nom) {
	nom_ = nom;
}

void Medecin::modifierSpecialiste(Specialiste* uneSpecialiste) {
	specialite_ = uneSpecialiste;
}

void Medecin::modifierHoraires(int horaire) {
	horaires_ = horaire;
}
