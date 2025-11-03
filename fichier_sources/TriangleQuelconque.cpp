// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// TriangleQuelconque - Implémentation

#include "stdafx.h"
#include "TriangleQuelconque.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

// Définition portable de PI
constexpr double PI = 3.14159265358979323846;

//declaration de mon compteur de triangle
int TriangleQuelconque::compteur = 0;
int TriangleQuelconque::decrementer = 0;

int TriangleQuelconque::getCompteurTriangle() {
    return compteur;
}
void TriangleQuelconque::incrementerCompteur() {
    compteur++;
}

void TriangleQuelconque::decrementerCompteur() {
    decrementer--;
}

// Vérification validité triangle
bool TriangleQuelconque::estValide(double A, double B, double C) const {
    return (A > 0 && B > 0 && C > 0 &&
        A + B > C &&
        A + C > B &&
        B + C > A);
}

// Constructeur avec 3 côtés
TriangleQuelconque::TriangleQuelconque(double A, double B, double C) {
    incrementerCompteur();
    if (this->estValide(A, B, C)) {
        this->a = A;
        this->b = B;
        this->c = C;

    }
    else {
        throw invalid_argument("Les cotes ne forment pas un triangle valide !");
    }

    cout << "creation dun objet de type Triangle Quelconque." << endl;
    cout << "valeur du cote a = " << this->a << endl;
    cout << "valeur du cote b = " << this->b << endl;
    cout << "valeur du cote c = " << this->c << endl;
    cout << "nombre de Triangle Quelconque en memoire : " << compteur << endl;
}

// Constructeur avec 2 côtés + angle (en degrés)
TriangleQuelconque::TriangleQuelconque(double A, double B, double angleDegres, bool fromAngle) {
    incrementerCompteur();
    if (A <= 0 || B <= 0 || angleDegres <= 0 || angleDegres >= 180) {
        throw invalid_argument("Parametres invalides pour construire le triangle !");
    }

    double angleRad = angleDegres * PI / 180.0;
    double angle = sqrt(A * A + B * B - 2 * A * B * cos(angleRad));

    if (this->estValide(A, B, angle)) {
        this->a = A;
        this->b = B;
        this->c = angle;
    }
    else {
        throw invalid_argument("Impossible de former un triangle avec ces valeurs !");
    }

    cout << "creation dun objet de type Triangle Quelconque." << endl;
    cout << "valeur du cote a = " << this->a << endl;
    cout << "valeur du cote b = " << this->b << endl;
    cout << "valeur de langle = " << this->c << endl;
    cout << "nombre de Triangle Quelconque en memoire : " << compteur << endl;
}

//destructeur
TriangleQuelconque::~TriangleQuelconque() {
    decrementerCompteur();
    cout << "destruction dun objet de type triangle quelconque." << endl;
    cout << "Nombre de traingle quelconque apres suppression : " << compteur << endl;
}

// Périmètre
double TriangleQuelconque::getPerimetre() const {
    return this->a + this->b + this->c;
}

// Surface (formule de Héron)
double TriangleQuelconque::getSurface() const {
    double p = this->getPerimetre() / 2.0;
    return sqrt(p * (p - this->a) * (p - this->b) * (p - this->c));
}

// Getters
double TriangleQuelconque::getA() const { return this->a; }
double TriangleQuelconque::getB() const { return this->b; }
double TriangleQuelconque::getC() const { return this->c; }
