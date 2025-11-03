// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe Losange - Implémentation

#include "stdafx.h"
#include "Losange.h"
#include <iostream>
#include <cmath>
using namespace std;

// Définition portable de PI
constexpr double PI = 3.14159265358979323846264338327950288;

//declaration de l'objet compteur 
int Losange::compteur = 0;
int Losange::decrementer = 0;

int Losange::getCompteur()
{
    return compteur;
}

void Losange::incrementerCompteur() {
    compteur++;
}

void Losange::decrementerCompteur() {
    decrementer--;
}

// Saisie par diagonales
Losange::Losange(bool fromDiagonales) {
    incrementerCompteur();
    if (fromDiagonales) {
        do {
            cout << "Entrer la première diagonale (d1 > 0) : ";
            cin >> d1;
            if (d1 <= 0) cout << "Valeur invalide !" << endl;
        } while (d1 <= 0);

        do {
            cout << "Entrer la deuxième diagonale (d2 > 0) : ";
            cin >> d2;
            if (d2 <= 0) cout << "Valeur invalide !" << endl;
        } while (d2 <= 0);

        // Calcul du côté (théorème de Pythagore)
        cote = sqrt(pow(d1 / 2, 2) + pow(d2 / 2, 2));
        // Angle entre les côtés (approximation comme en Java)
        angle = 2 * atan(d1 / d2);
    }
    else {
        // Initialisation par défaut
        d1 = d2 = cote = angle = 0.0;
    }

    cout << "Creation dun objet de type losange." << endl;
    cout << "diagonal 1 = " << this->d1 << endl;
    cout << "diagonal 2 = " << this->d2 << endl;
    cout << "Nombre de Losange en memoire " << endl;
}

// Constructeur : saisie par côté + angle
Losange::Losange() {
    incrementerCompteur();
    do {
        cout << "Entrer la longueur du côté (c > 0) : ";
        cin >> cote;
        if (cote <= 0) cout << "Valeur invalide !" << endl;
    } while (cote <= 0);

    double angleDeg;
    do {
        cout << "Entrer l’angle en degrés (entre 0 et 180) : ";
        cin >> angleDeg;
        if (angleDeg <= 0 || angleDeg >= 180)
            cout << "Valeur invalide !" << endl;
    } while (angleDeg <= 0 || angleDeg >= 180);

    this->angle = angleDeg * PI / 180.0; // conversion en radians

    // Calcul des diagonales
    this->d1 = 2 * cote * sin(this->angle / 2);
    this->d2 = 2 * cote * cos(this->angle / 2);

    cout << "Creation dun objet de type losange." << endl;
    cout << "cote = " << this->cote << endl;
    cout << "angle = " << this->angle << endl;
    cout << "valeur de la diagonal 1 = " << this->d1 << endl;
    cout << "valeur de la diagonal 2 = " << this->d2 << endl;
    cout << "Nombre de Losange en memoire " << endl;
}

//destructeur
Losange::~Losange() {
    decrementerCompteur();
    cout << "destruction dun objet de type Losange " << endl;
    cout << "Nombre de Losange apres destruction : " << compteur << endl;
}

// Périmètre
double Losange::perimetre() const {
    return 4 * cote;
}

// Surface via diagonales
double Losange::surfaceParDiagonales() const {
    return (d1 * d2) / 2.0;
}

// Surface via côté + angle
double Losange::surfaceParCoteEtAngle() const {
    return cote * cote * sin(angle);
}

// Getters
double Losange::getCote() const { return this->cote; }
double Losange::getD1() const { return this->d1; }
double Losange::getD2() const { return this->d2; }
double Losange::getAngleDeg() const { return this->angle * 180.0 / PI; }


