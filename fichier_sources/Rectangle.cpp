// Auteur : Ahmed Boukra Bettayeb
// Version : 3.0
// Date : 16/11/2025
//	Objet : Definition des methodes de la classe Rectangle 
//			Calcul de Perimetre et de surface
//			Instanciation statique des objets (pas de pointeurs)

//#include "stdafx.h"
#include "Rectangle.h"
using namespace std;

// Definition du compteur statique et des methodes utilitaires
int Rectangle::compteur = 0;
int Rectangle::decrementer = 0;
void Rectangle::incrementerCompteur(){ compteur++; }
void Rectangle::decrementerCompteur(){ if (compteur>0) compteur--; }
int Rectangle::getCompteurRectangle(){ return compteur; }

Rectangle::Rectangle(double Long, double Large)
{
	// ensure per-class counters are available
	// (static compteur and helpers are defined below)
	incrementerCompteur();      //il manque ça
    forme::incrementerFormes(); //compteur global

	this->setLongueur(Long);
	this->setLargeur(Large);

	cout << "Creation d'un Rectangle. Compteur : " << compteur 
         << ", total formes : " << forme::compteurFormes << endl;
}

Rectangle::~Rectangle()
{
	decrementerCompteur();       //décrémentation
    forme::decrementerFormes();  //compteur global

    cout << "Suppression d'un Rectangle. Restants : " << compteur 
         << ", total formes : " << forme::compteurFormes << endl;
}

void Rectangle::setLongueur(double Long)
{
	this->Longueur = Long;
	this->CalculerSurface();
	this->CalculerPerimetre();
}

void Rectangle::setLargeur(double Large)
{
	this->Largeur = Large;
	this->CalculerSurface();
	this->CalculerPerimetre();
}

void Rectangle::SaisirLongueur()
{
	double Long;

	do
	{
		cout << "Entrez la longueur du rectangle: " << endl;
		cin >> Long;
	} while (Long < 0.0);

	this->Longueur = Long;
	this->CalculerSurface();
	this->CalculerPerimetre();
}

void Rectangle::SaisirLargeur()
{
	double Large;

	do
	{
		cout << "Entrez la largeur du rectangle: " << endl;
		cin >> Large;
	} while (Large < 0.0);

	this->Largeur = Large;
	this->CalculerSurface();
	this->CalculerPerimetre();
}

void Rectangle::SaisirDimension()
{
	this->SaisirLongueur();
	this->SaisirLargeur();
}

void Rectangle::SaisirDimension(double _dim1, double _dim2)
{
	this->setLongueur(_dim1);
	this->setLargeur(_dim2);
}

void Rectangle::CalculerPerimetre()
{
	this->Perimetre = (2 * this->Longueur) + (2 * this->Largeur);
}

void Rectangle::CalculerSurface()
{
	this->surface = this->Longueur * this->Largeur;
}

double Rectangle::getSurface() const
{
	return(this->surface);
}

double Rectangle::getPerimetre() const
{
	return(this->Perimetre);
}


