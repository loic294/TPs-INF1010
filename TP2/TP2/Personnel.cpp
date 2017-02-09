/********************************************
* Titre: Travail pratique #2 - Personnel.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

Personnel::Personnel() {
	vector<Medecin*> medecins_;
	vector<Infirmier*> infirmiers_;
};

Personnel::~Personnel() {
	
	for (int i = 0; i < medecins_.size(); i++)
	{
		delete medecins_[i];
	}

	for (int i = 0; i < infirmiers_.size(); i++)
	{
		delete infirmiers_[i];
	}

};
	
bool Personnel::ajouterMedecin(Medecin* medecin)  
{
	// A MODIFIER...

	bool memeNom = false;

	for (int i = 0; i < medecins_.size() && !memeNom; i++)
	{
		if (*medecins_[i] == medecin->obtenirNom()) memeNom = true;
	}

	if (!memeNom) {
		medecins_.push_back(medecin);
		std::cout << medecin->obtenirNom() << " a ete ajoute comme medecin." << endl;
	}
		

	return memeNom;
}

bool Personnel::retirerMedecin(const std::string& nom)  
{
	// A MODIFIER...
	bool memeNom = false;
	int pos = 0;

	for (int i = 0; i < medecins_.size() && !memeNom; i++)
	{
		if (*medecins_[i] == nom) {
			memeNom = true;
			pos = i;
		}
	}

	if (memeNom) {
		std::cout << medecins_[pos]->obtenirNom() << " a ete retire comme medecin." << endl;
		medecins_[pos] = medecins_[medecins_.size() - 1];
		medecins_.pop_back();
	}
	

	return memeNom;
}

bool Personnel::ajouterInfirmier(Infirmier* infirmier) 
{
	// A MODIFIER...

	bool memeNom = false;

	for (size_t i = 0; i < infirmiers_.size() && !memeNom; i++)
	{
		if (*infirmiers_[i] == infirmier->obtenirNomComplet()) memeNom = true;
	}

	if (!memeNom) {
		infirmiers_.push_back(infirmier);
		std::cout << infirmier->obtenirNomComplet() << " a ete ajoute comme infirmier." << endl;
	}
		

	return memeNom;

}

bool Personnel::retirerInfirmier(const std::string& nomComplet) 
{
	// A MODIFIER...

	bool memeNom = false;
	int pos = 0;

	for (int i = 0; i < infirmiers_.size() && !memeNom; i++)
	{
		if (*infirmiers_[i] == nomComplet) {
			memeNom = true;
			pos = i;
		}
	}

	if (memeNom) {
		std::cout << infirmiers_[pos]->obtenirNomComplet() << " a ete retire comme infirmier." << endl;
		infirmiers_[pos] = infirmiers_[medecins_.size() - 1];
		infirmiers_.pop_back();
	}

	

	return memeNom;

}
	

void Personnel::information() const // A MODIFIER...
{
	afficherMedecins();
	afficherInfirmiers();
}

void Personnel::afficherMedecins() const // A MODIFIER... (si necessaire)
{
	string tabMed = "Tableau Medecins";
	string nom = "Nom";
	string horaires = "Horaires";
	string domaine = "Domaine Specialite";
	string niveau = "Niveau Specialite";

	std::cout << AFFICHER_ESPACE(espacement_medecin / 2) << tabMed 
		<< AFFICHER_ESPACE(espacement_medecin / 2) << endl;

	std::cout << AFFICHER_LINE(espacement_medecin + tabMed.size()) << endl;

	std::cout << "| " << nom << AFFICHER_ESPACE(espace_nom - nom.size()) 
		<< " | " << horaires << AFFICHER_ESPACE(2*espace_horaires - horaires.size())
		<< " | " << domaine << AFFICHER_ESPACE(espace_domaine - domaine.size()) 
		<< " | " << AFFICHER_ESPACE(espace_niveau - niveau.size() / 2) << niveau
		<< AFFICHER_ESPACE(espace_niveau - niveau.size() / 2)
		<< "| " << endl;
		
	std::cout << AFFICHER_LINE(espacement_medecin + tabMed.size()) << endl;
	for (size_t i = 0; i < medecins_.size(); i++)
	{	
		medecins_[i]->information();
		std::cout << endl;
	}
	std::cout << AFFICHER_LINE(espacement_medecin + tabMed.size()) << endl;
	std::cout << AFFICHER_ESPACE(espacement_medecin + tabMed.size()) << endl;
}

void Personnel::afficherInfirmiers() const // A MODIFIER... (si necessaire)
{
	string tabInf = "Tableau Infimiers";
	string nomComplet = "Nom Complet";
	string nbChambre = "Nombre de Chambre";
	std::cout << AFFICHER_ESPACE(espacement_infirmier/2) << tabInf 
		<< AFFICHER_ESPACE(espacement_infirmier/2) << endl;
	std::cout << AFFICHER_LINE(espacement_infirmier + tabInf.size()) << endl;
	
	std::cout << "| " << nomComplet << AFFICHER_ESPACE(espace_nom - nomComplet.size())
		 << " | " << nbChambre << AFFICHER_ESPACE(2 * espace_chambre - nbChambre.size())
		 << " | " << endl;
	std::cout << AFFICHER_LINE(espacement_infirmier + tabInf.size()) << endl;

	for (size_t i = 0; i < infirmiers_.size(); i++)
	{
		infirmiers_[i]->information();
		std::cout << endl;
	}

	std::cout << AFFICHER_LINE(espacement_infirmier + tabInf.size());
}

Personnel& Personnel::operator+=(Medecin* medecin) {
	ajouterMedecin(medecin);
	return *this;
}

Personnel& Personnel::operator-=(Medecin* medecin) {
	retirerMedecin(medecin->obtenirNom());
	return *this;
}

Personnel& Personnel::operator+=(Infirmier* infirmier) {
	ajouterInfirmier(infirmier);
	return *this;
}

Personnel& Personnel::operator-=(Infirmier* infirmier) {
	retirerInfirmier(infirmier->obtenirNomComplet());
	return *this;
}

std::ostream& operator<<(std::ostream& o, Personnel& personnel) {
	personnel.information();
	return o;
}