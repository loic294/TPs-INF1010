/**************************************************
 * Titre: Travail pratique #1 - Main.cpp
 * Date: 31 janvier 2017
 * Auteur: Julien Bergeron (1829496) et Loic Bellemare-Alford (1846135)
**************************************************/

 #include "Specialiste.h"
#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
        //C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez un objet du type Infirmier � l'aide du constructeur par d�faut

	Infirmier infirmier_1 = Infirmier();

	//2-  Modifiez le nom, le prenom et le nbChambre de cet objet � l'aide des m�thodes de modification

	infirmier_1.modifierPrenom("Julien");
	infirmier_1.modifierNom("Bergeron");
	infirmier_1.modifierNbChambre(56);


	//3-  Creez 11 autres objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix

	Infirmier infirmier_2 = Infirmier("Bellemare Alford","Loic",23);
	Infirmier infirmier_3 = Infirmier("Rault","Alexandre",76);
	Infirmier infirmier_4 = Infirmier("Huppe","Jeremie",54);
	Infirmier infirmier_5 = Infirmier("Bayard", "Nicolas", 13);
	Infirmier infirmier_6 = Infirmier("Yoshida","Noboru",6);
	Infirmier infirmier_7 = Infirmier("Bellemare Alford","Daphnee",89);
	Infirmier infirmier_8 = Infirmier("Messier","Frederique",200);
	Infirmier infirmier_9 = Infirmier("Kang","Brandon",3);
	Infirmier infirmier_10 = Infirmier("Marcoux","Emilie",26);
	Infirmier infirmier_11 = Infirmier("Parenteau","Zoe",20);
	Infirmier infirmier_12 = Infirmier("Dehem", "Friedrich",42);


	//4-  Creez un objet du type Personnel � l'aide du constructeur par d�faut

	Personnel personnel = Personnel();

	//5-  Ajoutez les 12 objets du type Infimier � tableauInfirmiers de ce dernier

	personnel.ajouterInfirmier(infirmier_1);
	personnel.ajouterInfirmier(infirmier_2);
	personnel.ajouterInfirmier(infirmier_3);
	personnel.ajouterInfirmier(infirmier_4);
	personnel.ajouterInfirmier(infirmier_5);
	personnel.ajouterInfirmier(infirmier_6);
	personnel.ajouterInfirmier(infirmier_7);
	personnel.ajouterInfirmier(infirmier_8);
	personnel.ajouterInfirmier(infirmier_9);
	personnel.ajouterInfirmier(infirmier_10);
	personnel.ajouterInfirmier(infirmier_11);
	personnel.ajouterInfirmier(infirmier_12);

	//6-  Creez un objet du type Specialite � l'aide du constructeur par d�faut

	Specialiste* specialiste_1 = new Specialiste();

	//7-  Modifiez le domaine et le niveau de cet objet � l'aide des m�thodes de modification

	specialiste_1->modifierDomaine("Anesthesiologie");
	specialiste_1->modifierNiveau(10);

	//8-  Creez 5 autres objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix

	Specialiste* specialiste_2 = new Specialiste("Neurochirurgie", 12);
	Specialiste* specialiste_3 = new Specialiste("Ophtalmologie", 6);
	Specialiste* specialiste_4 = new Specialiste("Psychiatrie", 7);
	Specialiste* specialiste_5 = new Specialiste("Rhumatologie", 3);
	Specialiste* specialiste_6 = new Specialiste("Neurologie", 5);

	//9-  Creez un objet du type Medecin � l'aide du constructeur par d�faut

	Medecin medecin_1;

	//10- Modifiez le nom, les horaires et la specialite de ce dernier

	medecin_1.modifierNom("Loic Bellemare-Alford");
	medecin_1.modifierHoraires(14);
	medecin_1.modifierSpecialiste(specialiste_1);


	//11- Creez 5 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix

	Medecin medecin_2 = Medecin("Julien Bergeron", 4, specialiste_2);
	Medecin medecin_3 = Medecin("Jeremie Huppe", 9, specialiste_3);
	Medecin medecin_4 = Medecin("Nicolas Bayard", 22, specialiste_4);
	Medecin medecin_5 = Medecin("Alexandare Rault", 12, specialiste_5);
	Medecin medecin_6 = Medecin("Brandon Kang", 19, specialiste_6);

	//12- Expliquez la relation entre les deux objets Medecin et Specialite. Justifiez votre r�ponse

	// La spécialité est un attribut de la classe Medecin. Spécialité est en fait un simple pointeur
	// qui peut être modifié comme tout attribut de la classe Medecin. En plus de pouvoir changer le
	// pointeur dans Medecin, il est possible d'accéder par l'attribut à l'objet de Medecin pour le lire
	// ou le modifier.

	//13- Ajoutez les 6 objets du type Medecin � tableauMedecins de l'objet Personnel d�j� cr��

	personnel.ajouterMedecin(medecin_1);
	personnel.ajouterMedecin(medecin_2);
	personnel.ajouterMedecin(medecin_3);
	personnel.ajouterMedecin(medecin_4);
	personnel.ajouterMedecin(medecin_5);
	personnel.ajouterMedecin(medecin_6);

	//14- Affichez la liste des medecins

	personnel.afficherMedecins();

	//15- Affichez la liste des infirmiers

	personnel.afficherInfirmiers();

	return 0;
}
