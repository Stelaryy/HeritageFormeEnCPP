// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe Cercle

#include "stdafx.h"
#include "Cercle.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

// Définition portable de PI
constexpr double PI = 3.14159265358979323846;

int Cercle::compteur = 0;
int Cercle::decrementer = 0;

int Cercle::getCompteurCercle() {
    return compteur;
}

void Cercle::incrementerCompteur() {
    compteur++;
}

void Cercle::decrementerCompteur() {
    decrementer--;
}

// Constructeur
Cercle::Cercle(double r) {
    incrementerCompteur();
    if (r > 0) {
        this->rayon = r;
    }
    else {
        throw invalid_argument("Le rayon doit etre positif.");
    }

    cout << "Creation d'un objet de type Cercle. " << endl;
    cout << "De rayon : " << this->rayon << endl;
    cout << "nombre de Cercle en memoir : " << compteur << endl;
}
//desctruteur
Cercle::~Cercle(){
    decrementerCompteur();
    cout << "destruction d'un objet de type Cercle." << endl;
    cout << "Nombre de Cercle restant apres destruction : " << compteur << endl;
}

// Getter
double Cercle::getRayon() const {
    return this->rayon;
}

// Surface : πr²
double Cercle::getSurface() const {
    return PI * this->rayon * this->rayon;
}

// Périmètre : 2πr
double Cercle::getPerimetre() const {
    return 2 * PI * this->rayon;
}
