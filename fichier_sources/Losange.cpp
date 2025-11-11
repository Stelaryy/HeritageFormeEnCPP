// Auteur : Ahmed Boukra Bettayeb
// Version : 2.1
// Date : 14/10/2025
// Classe Losange - Implémentation

#include "Losange.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

constexpr double PI = 3.14159265358979323846;

// -----------------------------
// Constructeurs
// -----------------------------

// Constructeur par défaut (saisie du côté et de l’angle)
Losange::Losange() {
    SaisirCote();
    SaisirAngle();

    // Calcul automatique des diagonales
    d1 = 2 * cote * sin(angle / 2);
    d2 = 2 * cote * cos(angle / 2);

    // Calculs géométriques
    surface = cote * cote * sin(angle);
    perimetre = 4 * cote;

    cout << "Création d'un losange (côté + angle saisis)." << endl;
}

// Constructeur via diagonales
Losange::Losange(double _d1, double _d2) {
    setDiagonal1(_d1);
    setDiagonal2(_d2);

    // Calcul du côté via Pythagore
    cote = sqrt(pow(_d1 / 2, 2) + pow(_d2 / 2, 2));

    // Calcul surface et périmètre
    surface = (_d1 * _d2) / 2.0;
    perimetre = 4 * cote;

    cout << "Création d'un losange via diagonales." << endl;
}

// Constructeur via côté + angle (en degrés)
Losange::Losange(double _cote, double _angle) {
    setCote(_cote);
    setAngle(_angle * PI / 180.0); // conversion degrés → radians

    // Calcul des diagonales
    d1 = 2 * cote * sin(angle / 2);
    d2 = 2 * cote * cos(angle / 2);

    // Calcul surface et périmètre
    surface = cote * cote * sin(angle);
    perimetre = 4 * cote;

    cout << "Création d'un losange via côté + angle." << endl;
}

// Destructeur
Losange::~Losange() {
    cout << "Destruction d'un objet Losange." << endl;
}

// -----------------------------
// Setters protégés
// -----------------------------
void Losange::setDiagonal1(double Diagonal1) {
    if (Diagonal1 <= 0)
        throw invalid_argument("La diagonale 1 doit être positive.");
    d1 = Diagonal1;
}

void Losange::setDiagonal2(double Diagonal2) {
    if (Diagonal2 <= 0)
        throw invalid_argument("La diagonale 2 doit être positive.");
    d2 = Diagonal2;
}

void Losange::setCote(double _Cote) {
    if (_Cote <= 0)
        throw invalid_argument("Le côté doit être positif.");
    cote = _Cote;
}

void Losange::setAngle(double Angle) {
    if (Angle <= 0 || Angle >= PI)
        throw invalid_argument("L'angle doit être compris entre 0 et 180 degrés.");
    angle = Angle;
}

// -----------------------------
// Méthodes privées de saisie
// -----------------------------
void Losange::SaisirDiagonal1() {
    do {
        cout << "Entrez la première diagonale (d1 > 0) : ";
        cin >> d1;
    } while (d1 <= 0);
}

void Losange::SaisirDiagonal2() {
    do {
        cout << "Entrez la deuxième diagonale (d2 > 0) : ";
        cin >> d2;
    } while (d2 <= 0);
}

void Losange::SaisirCote() {
    do {
        cout << "Entrez la longueur du côté (c > 0) : ";
        cin >> cote;
    } while (cote <= 0);
}

void Losange::SaisirAngle() {
    double deg;
    do {
        cout << "Entrez l'angle en degrés (0 < angle < 180) : ";
        cin >> deg;
    } while (deg <= 0 || deg >= 180);
    angle = deg * PI / 180.0; // conversion en radians
}

// -----------------------------
// Méthodes publiques héritées
// -----------------------------
void Losange::SaisirDimension(double _dim1) {
    // Saisie par côté uniquement → demande de l’angle ensuite
    setCote(_dim1);
    SaisirAngle();

    // Recalcul complet
    d1 = 2 * cote * sin(angle / 2);
    d2 = 2 * cote * cos(angle / 2);
    surface = cote * cote * sin(angle);
    perimetre = 4 * cote;
}

void Losange::SaisirDimension(double _dim1, double _dim2) {
    // Saisie par diagonales
    setDiagonal1(_dim1);
    setDiagonal2(_dim2);

    // Calculs géométriques
    cote = sqrt(pow(_dim1 / 2, 2) + pow(_dim2 / 2, 2));
    surface = (_dim1 * _dim2) / 2.0;
    perimetre = 4 * cote;
}

double Losange::getSurface() const {
    return surface;
}

double Losange::getPerimetre() const {
    return perimetre;
}
