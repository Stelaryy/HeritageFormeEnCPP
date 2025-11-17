// Auteur : Ahmed Boukra Bettayeb
// Version : 3.0
// Date : 16/11/2025
// Classe Carre - Implementation

//#include "stdafx.h"
#include "Carre.h"
#include <iostream>
using namespace std;

// Constructeur
Carre::Carre() : Rectangle(0.0, 0.0){
   	incrementerCompteur();       // Compteur Carre
	forme::incrementerFormes();  // Compteur global
	cout << "Creation d'un Carre. Compteur: " << compteurCarre
    << ", total formes: " << forme::compteurFormes << endl;
	
	this->SaisirDimension();
}

Carre::Carre(double mCote) : Rectangle(mCote, mCote){
   	incrementerCompteur();       // Compteur Carre
	forme::incrementerFormes();  // Compteur global
	cout << "Creation d'un Carre. Compteur: " << compteurCarre
    << ", total formes: " << forme::compteurFormes << endl;

	this->cote = mCote;
}

//destructeur
Carre::~Carre() {
    decrementerCompteur();
	forme::decrementerFormes();
	cout << "Suppression d'un Carre. Restants: " << compteurCarre
     << ", total formes: " << forme::compteurFormes << endl;

}
void Carre::SaisirDimension()
{
	double mCote;

	do
	{
		cout << "Entrez la longueur du cote du carre: \n" << endl;
		cin >> mCote;
	} while(mCote < 0.0);

	this->cote = mCote;
	this->setLongueur(this->cote);
	this->setLargeur(this->cote);
	this->CalculerSurface();
	this->CalculerPerimetre();
}

void Carre::SaisirDimension(double a)
{
	this->cote = a;
	this->setLongueur(this->cote);
	this->setLargeur(this->cote);
	this->CalculerSurface();
	this->CalculerPerimetre();
}

