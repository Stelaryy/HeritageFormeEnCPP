// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// rectangle - implementation

#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

//declaration de mon compteur pour rectangle 
int Rectangle::compteur = 0;
int Rectangle::decrementer = 0;

int Rectangle::getCompteurRectangle() {
    return compteur;
}

void Rectangle::incrementerCompteur() {
    compteur++;
}

void Rectangle::decrementerCompteur() {
    decrementer--;
}

Rectangle::Rectangle(double Long, double Large)
{
    incrementerCompteur();
    if (Long > 0 && Large > 0) {
        this->Longueur = Long;
        this->Largeur = Large;
    }
    else {
        cout << "Valeurs invalides, valeurs par défaut attribuées (1,1)" << endl;
        this->Longueur = 1;
        this->Largeur = 1;
    }
    cout << "Creation dun objet de type rectangle : " << endl;
    cout << "Valeur de la longueur = " << this->Longueur << endl;
    cout << "Valeur de la largeur =  " << this->Largeur << endl;
    cout << "Nombre de Retangle en memoire : " << compteur << endl;
        
}

Rectangle::~Rectangle() {
    decrementerCompteur();
    cout << "destruction dun objet de type Rectangle : " << endl;
    cout << "Nombre de Rectangle apres suppression : " << compteur << endl;
}

void Rectangle::setLargeur()
{
    double temp;
    do {
        cout << "Entrez la largeur (>0) : ";
        cin >> temp;
    } while (temp <= 0);
    cout << "valeur de la longueur reussi" << endl;
    this->Largeur = temp;
}

double Rectangle::getLargeur() const {
    return this->Largeur;
}

void Rectangle::setLongueur()
{
    double temp;
    do {
        cout << "Entrez la longueur (>0) : ";
        cin >> temp;
    } while (temp <= 0);
    this->Longueur = temp;
}

double Rectangle::getLongueur() const {
    return this->Longueur;
}

double Rectangle::calculPerimetre() const {
    return 2 * (this->Longueur + this->Largeur);
}

double Rectangle::calculSurface() const {
    return this->Longueur * this->Largeur;
}
