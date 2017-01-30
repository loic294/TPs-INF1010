/********************************************
* Titre: Travail pratique #1 - Medecin.cpp
* Date: 31 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford
*******************************************/


#include <iostream>
#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"

Personnel::Personnel()
{
	tableauMedecins_ = new Medecin[3];
	capaciteTableauMedecins_ = 3;
	compteurMedecin_ = 0;

	tableauInfirmiers_ = new Infirmier[3];
	capaciteTableauInfirmiers_ = 3;
	compteurInfirmier_ = 0;

}

Personnel::~Personnel()
{
	delete[] tableauMedecins_;
	capaciteTableauMedecins_ = 3;
	compteurMedecin_ = 0;

	delete[] tableauInfirmiers_;
	capaciteTableauInfirmiers_ = 3;
	compteurInfirmier_ = 0;
} 

void Personnel::ajouterMedecin(Medecin& unMedecin)
{
	
	if (compteurMedecin_ == capaciteTableauMedecins_) // NOTE : Test d'�galit� c'est == pas = !!!
	{
		Medecin* tableauMedTmp = nullptr;
		capaciteTableauMedecins_ *= 2;
		tableauMedTmp = new Medecin[capaciteTableauMedecins_];

		for (size_t i = 0; i < compteurMedecin_; i++)
			tableauMedTmp[i] = tableauMedecins_[i];

		delete[] tableauMedecins_;
		tableauMedecins_ = tableauMedTmp; 
		
	}

	tableauMedecins_[compteurMedecin_] = unMedecin;
	compteurMedecin_++;
	
}

void Personnel::ajouterInfirmier(Infirmier& unInfirmier)
{

	if (compteurInfirmier_ == capaciteTableauInfirmiers_)
	{
		Infirmier* tableauInfirmiersTmp = nullptr;
		capaciteTableauInfirmiers_ *= 2;
		tableauInfirmiersTmp = new Infirmier[capaciteTableauInfirmiers_];

		for (size_t i = 0; i < compteurInfirmier_; i++)
			tableauInfirmiersTmp[i] = tableauInfirmiers_[i];

		delete[] tableauInfirmiers_;
		tableauInfirmiers_ = tableauInfirmiersTmp;
	}

	tableauInfirmiers_[compteurInfirmier_] = unInfirmier;
	compteurInfirmier_++;
}

void Personnel::afficherMedecins()
{
	std::cout << "====================================Tableau medecins"
		<< "=====================================" << endl;
	std::cout << "===================================================="
		<< "=====================================" << endl;
	std::cout << "| " << "Nom" << std::string(22, ' ') << "|"
		<< " Horaire" << "\t" << "|"
		<< " Specialite" << std::string(11, ' ') << "|"
		<< " Niveau Specialite" << "\t" << "|"
		<< endl;

	for (unsigned i = 0; i < compteurMedecin_; i++)
	{

		// NOTE : T'appelle un function donc c'est obtenirNom() pas obtenirNom

		std::cout <<"|  " << tableauMedecins_[i].obtenirNom()
			<< std::string(24 - tableauMedecins_[i].obtenirNom().size(), ' ') << "|"
			<< ' ' << tableauMedecins_[i].obtenirHoraires()  << "\t\t|" 
			<< ' ' << tableauMedecins_[i].obtenirSpecialiste().obtenirDomaine()
			<< std::string(21 - tableauMedecins_[i].obtenirSpecialiste().obtenirDomaine().size(), ' ') << "|"
			<< ' ' << tableauMedecins_[i].obtenirSpecialiste().obtenirNiveau() << "\t\t\t" << "|"
			<< endl;
	}

	std::cout << "==================================================="
		<< "======================================" << endl << endl;
}



void Personnel::afficherInfirmiers()
{

	std::cout << "===========================Tableau infirmiers"
		<< "============================" << endl;
	std::cout << "============================================="
		<< "============================" << endl;
	std::cout << "| " << "Nom, Prenom" << std::string(25, ' ') << "|"
		<< "Nb de Chambres" << "\t" << "|"
		<< endl;

	for (unsigned i = 0; i < compteurInfirmier_; i++)
	{

		int size = tableauInfirmiers_[i].obtenirPrenom().size() + tableauInfirmiers_[i].obtenirNom().size();

		std::cout << "|  " << tableauInfirmiers_[i].obtenirNom() << ", " 
			<< tableauInfirmiers_[i].obtenirPrenom() 
			<< std::string(33 - size, ' ') << "|"
			<< ' ' << tableauInfirmiers_[i].obtenirnbChambre() << "\t\t" << "|"
			<< endl;
	}

	std::cout << "============================================"
		<< "=============================" << endl << endl;
}