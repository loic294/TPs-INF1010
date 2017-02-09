/********************************************
* Titre: Travail pratique #2 - Main.cpp
* Date: 8 janvier 2017
* Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
*******************************************/

#include "Specialite.h"
#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include "Hopital.h"
#include <string>
#include <iostream>

using namespace std;
/**
TODO: Répondre au questions
1. Quelle est l’utilité de l’opérateur = et du constructeur par copie ?
   Ces deux méthodes permettent de faire une copie d'un objet sans devoir
   passer chacune des variables par paramètres.
2. Dans quel cas est-il absolument nécessaire de les implémenter ?
   Ils sont absolument nécessaire lorsqu'on veut initialiser ou copier
   un objet mais qu'on ne désire pas passer chacune des variables par 
   paramètre.
3. Qu’est-ce qui différencie l’opérateur = du constructeur par copie ?
   Le constructeur par copie est appelé lorsque l'objet est créé tandis que
   l'opérateur = peut être appelé sur un objet déjà monté. Il va donc
   remplacer les valeurs au lieu d'initialiser les valeurs. 
**/
int main()
{
	// C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez 11 objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// A COMPLETER...

	Infirmier* infirmier_2 = new Infirmier("Bellemare", "Loic", 23);
	Infirmier* infirmier_3 = new Infirmier("Rault", "Alex", 76);
	Infirmier* infirmier_4 = new Infirmier("Huppe", "Jeremie", 54);
	Infirmier* infirmier_5 = new Infirmier("Bayard", "Nicolas", 13);
	Infirmier* infirmier_6 = new Infirmier("Yoshida", "Noboru", 6);
	Infirmier* infirmier_7 = new Infirmier("Alford", "Daphnee", 89);
	Infirmier* infirmier_8 = new Infirmier("Messier", "Fred", 200);
	Infirmier* infirmier_9 = new Infirmier("Kang", "Brandon", 3);
	Infirmier* infirmier_10 = new Infirmier("Marcoux", "Emilie", 26);
	Infirmier* infirmier_11 = new Infirmier("Parent", "Zoe", 20);
	Infirmier* infirmier_12 = new Infirmier("Dehem", "Fried", 42);

	Infirmier* infirmier_13 = new Infirmier("Dehem", "Fried", 24);

	//2-  Creez deux objets du type Personnel � l'aide du constructeur par d�faut
	// A COMPLETER...

	Personnel* personnel1 = new Personnel();
	Personnel* personnel2 = new Personnel();

	//3 - Creez deux objects de type Hopital qui vont prendre chacun en parametre le nom de l'hopital et le personnel assigné
	// Hopital Sacré-Coeur de Montréal
	// Hôpital Jean-Talon
	// A COMPLETER...

	Hopital hopital1 = Hopital("Hopital Sacre-Coeur de Montreal", personnel1);
	Hopital hopital2 = Hopital("Hopital Jean-Talon", personnel2);


	//4-  Ajoutez les 6 objets du type Infimier � au personnel de l'Hôpital Sacré-Coeur de Montréal
	// A COMPLETER...

	personnel1->ajouterInfirmier(infirmier_2);
	personnel1->ajouterInfirmier(infirmier_3);
	personnel1->ajouterInfirmier(infirmier_4);
	personnel1->ajouterInfirmier(infirmier_5);
	personnel1->ajouterInfirmier(infirmier_6);
	personnel1->ajouterInfirmier(infirmier_7);

	//5-  Ajoutez les 5 objets qui restent du type Infimier � au personnel de l'Hôpital Jean-Talon
	// A COMPLETER...

	personnel2->ajouterInfirmier(infirmier_8);
	personnel2->ajouterInfirmier(infirmier_9);
	personnel2->ajouterInfirmier(infirmier_10);
	personnel2->ajouterInfirmier(infirmier_11);
	personnel2->ajouterInfirmier(infirmier_12);
	
	//6-  Creez 7 objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Specialites : Chirurgie, Demartologie, Gastrologie, Sport, Podologie, Pediatrie, Psychiatrie
	// A COMPLETER...

	Specialite* specialiste_2 = new Specialite("Chirurgie", 12);
	Specialite* specialiste_3 = new Specialite("Demartologie", 6);
	Specialite* specialiste_4 = new Specialite("Gastrologie", 7);
	Specialite* specialiste_5 = new Specialite("Podologie", 3);
	Specialite* specialiste_6 = new Specialite("Pediatrie", 5);
	Specialite* specialiste_7 = new Specialite("Sport", 12);
	Specialite* specialiste_8 = new Specialite("Psychiatrie", 12);

	//7- Creez 5 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Dr. Franc : en Chirurgie
	// Dr. Sherlock : en Demartologie
	// Dr. Holmes : en Gastrologie
	// Dr. Jean : en Podologie
	// Dr. Jules : en Pediatrie
	// A COMPLETER...

	Medecin* medecin_2 = new Medecin("Dr. Franc", 4, specialiste_2);
	Medecin* medecin_3 = new Medecin("Dr. Sherlock", 9, specialiste_3);
	Medecin* medecin_4 = new Medecin("Dr. Holmes", 22, specialiste_4);
	Medecin* medecin_5 = new Medecin("Dr. Jean", 12, specialiste_5);
	Medecin* medecin_6 = new Medecin("Dr. Jules", 19, specialiste_6);

	
	//8- Ajoutez les medecins : parmis le personnel de l'hopital Sacré-Coeur : 
	// Dr. Franc, Dr. Sherlock, Dr. Holmes, Dr. Jean, Dr. Jules

	personnel1->ajouterMedecin(medecin_2);
	personnel1->ajouterMedecin(medecin_3);
	personnel1->ajouterMedecin(medecin_4);
	personnel1->ajouterMedecin(medecin_5);
	personnel1->ajouterMedecin(medecin_6);


	//9- Creez 2 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Dr. Kyle : en Sport
	// Dr. House : en Psychiatrie
	// A COMPLETER...

	Medecin* medecin_7 = new Medecin("Dr. Kyle", 4, specialiste_7);
	Medecin* medecin_8 = new Medecin("Dr. House", 9, specialiste_8);

	
	//10- Creer un autre medecin Sherlock en utilisant l'opérateur = et en utilisant le medecin existante Sherlock.
	// Le horaire du deuxieme Sherlock devrai ensuite etre modifie pour une valeur differnte du premier Sherlock
	// A COMPLETER...

	medecin_3 = new Medecin("Dr. Sherlock", 24, specialiste_3);

	// Creer un autre medecin Holmes en utilisant le constructeur de copie et en utilisant le medecin existante Holmes.
	// L'horaire du deuxieme Holmes devrai ensuite etre modifie pour une valeur differnte du premier Holmes
	// A COMPLETER...

	//medecin_4 = new Medecin(medecin_4);
	//medecin_4->modifierHoraires(18);
	
	//11- Ajoutez les medecins : parmis le personnel de l'hopital Jean Talen : 
	// Dr. Sherlock , Dr. Holmes , Dr. Kyle, Dr. House
	// Dr. Sherlock et Dr. Holmes sont les deux objets crée à partir de l'opératteur =
	// A COMPLETER...

	personnel2->ajouterMedecin(medecin_3);
	personnel2->ajouterMedecin(medecin_4);
	personnel2->ajouterMedecin(medecin_7);
	personnel2->ajouterMedecin(medecin_8);


	//12- Retirer le medecin Jean et deux infirmiers de l'hopital Sacré-Coeur et ajouter les
	// a l'hopital Jean-talon

	personnel1->retirerMedecin(medecin_5->obtenirNom());
	personnel2->ajouterMedecin(medecin_5);

	personnel1->retirerInfirmier(infirmier_6->obtenirNomComplet());
	personnel2->ajouterInfirmier(infirmier_6);

	personnel1->retirerInfirmier(infirmier_2->obtenirNomComplet());
	personnel2->ajouterInfirmier(infirmier_2);


	//13- Faites afficher l'hopital Sacré-Coeur puis Jean-Talon
	// A COMPLETER...

	cout << hopital1 << endl;

	cout << hopital2 << endl;


	return 0;
}