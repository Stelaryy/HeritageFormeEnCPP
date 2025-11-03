// Auteur : Ahmed Boukra Bettayeb
// Version : 2.0
// Date : 14/10/2025
// Classe HexagoneIrregulier - Implémentation

#include "stdafx.h"
#include "HexagoneIrregulier.h"
#include <stdexcept>
#include <cmath>
#include <iostream>
using namespace std;

//declaration de mon compteur pour hexagone
int HexagoneIrregulier::compteur = 0;
int HexagoneIrregulier::decrementer = 0;

int HexagoneIrregulier::getCompteurHexagone() {
    return compteur;
}

void HexagoneIrregulier::incrementerCompteur() {
    compteur++;
}

void HexagoneIrregulier::decrementerCompteur() {
    decrementer--;
}


// Constructeur
HexagoneIrregulier::HexagoneIrregulier(const double s[6][2]) {
    incrementerCompteur();
    // copie des sommets
    for (int i = 0; i < 6; i++) {
        this->sommets[i][0] = s[i][0];
        this->sommets[i][1] = s[i][1];
    }

    cout << "Creation d un objet de type HexagoneIrregulier." << endl;
    cout << "Sommets 1 = " << this->sommets << endl;
    cout << "Sommets 2 = " << this->sommets << endl;
    cout << "Nombre d hexagoneirregulier en memoire : " << compteur << endl;
}

//destructeur
HexagoneIrregulier::~HexagoneIrregulier() {
    decrementerCompteur();
    cout << "HexagoneIrregulier detruit, restant : " << compteur << endl;
}

// Calcul du périmètre
double HexagoneIrregulier::getPerimetre() const {
    double perimetre = 0.0;
    for (int i = 0; i < 6; i++) {
        int j = (i + 1) % 6; // sommet suivant
        double dx = this->sommets[j][0] - this->sommets[i][0];
        double dy = this->sommets[j][1] - this->sommets[i][1];
        perimetre += sqrt(dx * dx + dy * dy);
    }
    return perimetre;
}

// Calcul de la surface (algorithme du "shoelace")
double HexagoneIrregulier::getSurface() const {
    double somme = 0.0;
    for (int i = 0; i < 6; i++) {
        int j = (i + 1) % 6;
        somme += (this->sommets[i][0] * this->sommets[j][1])
            - (this->sommets[j][0] * this->sommets[i][1]);
    }
    return fabs(somme) / 2.0;
}
