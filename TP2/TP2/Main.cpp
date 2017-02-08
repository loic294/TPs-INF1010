/**************************************************
 * Main.cpp
 * Date: 5 février 2017
**************************************************/

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
   A COMPLETER...
2. Dans quel cas est-il absolument nécessaire de les implémenter ?
   A COMPLETER...
3. Qu’est-ce qui différencie l’opérateur = du constructeur par copie ?
   A COMPLETER...
**/
int main()
{
	// C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez 11 objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// A COMPLETER...


	//2-  Creez deux objets du type Personnel � l'aide du constructeur par d�faut
	// A COMPLETER...


	//3 - Creez deux objects de type Hopital qui vont prendre chacun en parametre le nom de l'hopital et le personnel assigné
	// Hopital Sacré-Coeur de Montréal
	// Hôpital Jean-Talon
	// A COMPLETER...


	//4-  Ajoutez les 6 objets du type Infimier � au personnel de l'Hôpital Sacré-Coeur de Montréal
	// A COMPLETER...

	//5-  Ajoutez les 5 objets qui restent du type Infimier � au personnel de l'Hôpital Jean-Talon
	// A COMPLETER...
	
	//6-  Creez 7 objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Specialites : Chirurgie, Demartologie, Gastrologie, Sport, Podologie, Pediatrie, Psychiatrie
	// A COMPLETER...


	//7- Creez 5 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Dr. Franc : en Chirurgie
	// Dr. Sherlock : en Demartologie
	// Dr. Holmes : en Gastrologie
	// Dr. Jean : en Podologie
	// Dr. Jules : en Pediatrie
	// A COMPLETER...

	
	//8- Ajoutez les medecins : parmis le personnel de l'hopital Sacré-Coeur : 
	// Dr. Franc, Dr. Sherlock, Dr. Holmes, Dr. Jean, Dr. Jules


	//9- Creez 2 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Dr. Kyle : en Sport
	// Dr. House : en Psychiatrie
	// A COMPLETER...

	
	//10- Creer un autre medecin Sherlock en utilisant l'opérateur = et en utilisant le medecin existante Sherlock.
	// Le horaire du deuxieme Sherlock devrai ensuite etre modifie pour une valeur differnte du premier Sherlock
	// A COMPLETER...

	// Creer un autre medecin Holmes en utilisant le constructeur de copie et en utilisant le medecin existante Holmes.
	// L'horaire du deuxieme Holmes devrai ensuite etre modifie pour une valeur differnte du premier Holmes
	// A COMPLETER...

	
	//11- Ajoutez les medecins : parmis le personnel de l'hopital Jean Talen : 
	// Dr. Sherlock , Dr. Holmes , Dr. Kyle, Dr. House
	// Dr. Sherlock et Dr. Holmes sont les deux objets crée à partir de l'opératteur =
	// A COMPLETER...


	//12- Retirer le medecin Jean et deux infirmiers de l'hopital Sacré-Coeur et ajouter les
	// a l'hopital Jean-talon

	//13- Faites afficher l'hopital Sacré-Coeur puis Jean-Talon
	// A COMPLETER...


	return 0;
}