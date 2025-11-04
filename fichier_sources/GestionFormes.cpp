//	Auteur : Wilfrid Grassi
//	Version : 1.1
//	Date 13/09/2016
//	Objet : TP Programmation Objet BTS SN
//			Implementation d une classe Forme, et des classes d�rivees de cette classe (Rectangle, carre, cercle, triangle, hexagone etc...
//			Calcul de surface et de perimetre

// main�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"
#include "Forme.h"
#include "Rectangle.h"
#include "Carre.h"
using namespace std;

int main()
{
	int Touche = 0;
	Rectangle MonRectangle(0.0,0.0);
	Carre MonCarre(0.0);
	

	cout << "------------------------- Instanciation du Rectangle --------------------------" << endl;
	MonRectangle.SaisirDimension();
	cout << "Surface: " << MonRectangle.getSurface() << endl;
	cout << "Perimetre: " << MonRectangle.getPerimetre() << endl;
	cout << endl;

	cout << "------------------------- Instanciation du Carre --------------------------" << endl;
	MonCarre.SaisirDimension();
	cout << "Surface: " << MonCarre.getSurface() << endl;
	cout << "Perimetre: " << MonCarre.getPerimetre() << endl;
	cout << endl;


	std::getchar();

	// on attend l'appui sur la touche 'q'
	cout << endl << "Appuyer sur q et <ENTRER> pour quitter..." << endl;
	do
	{
		Touche = std::getchar();
	} while (Touche != 'q');

	return 0;
} // Fin du main() 
