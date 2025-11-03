// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe Ellipse - Implémentation

#include "stdafx.h"
#include "Ellipse.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

// Définition portable de PI
constexpr double PI = 3.14159265358979323846;

int Ellipse::compteur = 0;
int Ellipse::decrementer = 0;

int Ellipse::getCompteurellispe() {
    return compteur;
}

void Ellipse::incrementerCompteur() {
    compteur++;
}

void Ellipse::decrementerCompteur() {
    decrementer--;
}

// Constructeur
Ellipse::Ellipse(double A, double B) {
    incrementerCompteur();
    if (A > 0 && B > 0) {
        this->a = A;
        this->b = B;
    }
    else {
        throw invalid_argument("Les axes doivent etre positifs.");
    }

    cout << "Creation d'un objet de type Ellipse. " << endl;
    cout << " Axe a : " << this->a << endl;
    cout << " Axe b : " << this->b << endl;
    cout << "Nombre de Ellipse en memoire " << endl;
}
//destructeur 
Ellipse::~Ellipse() {
    decrementerCompteur();
    cout << "destruction d un objet de type Ellipse :" << endl;
    cout << "Nombre de Ellipse en memoire : " << compteur << endl;
}
// Getters
double Ellipse::getA() const {
    return this->a;
}

double Ellipse::getB() const {
    return this->b;
}

// Surface : πab
double Ellipse::getSurface() const {
    return PI * this->a * this->b;
}

// Périmètre 
double Ellipse::getPerimetre() const {
    return PI * (3 * (this->a + this->b) - sqrt((3 * this->a + this->b) * (this->a + 3 * this->b)));
}
