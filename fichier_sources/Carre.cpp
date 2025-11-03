// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe Carre - Implémentation

#include "stdafx.h"
#include "Carre.h"
#include <iostream>
using namespace std;

//declaration de mon compteur de carre 
int Carre::compteur = 0;
int Carre::decrementer = 0;

//methode d'incrementation 
void Carre::incrementerCompteur() {
    compteur++;
}
//methode du compteur
int Carre::getCompteurcarre() {
    return compteur;
}

void Carre::decrementerCompteur() {
    decrementer--;
}
// Constructeur
Carre::Carre(double c) {
    incrementerCompteur();
    if (c > 0)
        this->cote = c;
    else {
        cout << "Valeur invalide, veuillez entrer une valeur correcte" << endl;
        this->cote = 1.0;
    }
}

//destructeur
Carre::~Carre() {
    decrementerCompteur();
    cout << " Destruction d'un objet de type Carre " << endl;
    cout << " Nombre restant de Carre en memoire : " << compteur << endl;
}

// Périmètre
double Carre::perimetre() const {
    return 4 * this->cote;
}

// Surface
double Carre::surface() const {
    return cote * this->cote;
}

// Définir le côté via l'utilisateur
void Carre::setCote() {
    double temp;
    do {
        cout << "Entrez la valeur du cote de votre carre : ";
        cin >> temp;
    } while (temp <= 0);
    this->cote = temp;

    cout << "Creation c'un objet de type Carre." << endl;
    cout << "Cote = " << this->cote << endl;
    cout << "Nombre total de Carre en memoire : " << compteur << endl;
}

// Accesseur
double Carre::getCote() const {
    return this->cote;
}

