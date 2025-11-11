#include <iostream>
#include "forme.h"
#include "Rectangle.h"
#include "Carre.h"
#include "Ellipse.h"
#include "Cercle.h"
#include "Losange.h"

using namespace std;

int main()
{
    int Touche = 0;

    Rectangle MonRectangle(1.0, 1.0);
    Carre MonCarre(1.0);
    Ellipse MonEllipse(1.0, 1.0);
    Cercle MonCercle(1.0);
    Losange MonLosange; 

    cout << "------------------------- Instanciation du Rectangle --------------------------" << endl;
    MonRectangle.SaisirDimension();
    cout << "Surface: " << MonRectangle.getSurface() << endl;
    cout << "Perimetre: " << MonRectangle.getPerimetre() << endl << endl;

    cout << "------------------------- Instanciation du Carre --------------------------" << endl;
    MonCarre.SaisirDimension();
    cout << "Surface: " << MonCarre.getSurface() << endl;
    cout << "Perimetre: " << MonCarre.getPerimetre() << endl << endl;

    cout << "------------------------- Instanciation de l Ellipse --------------------------" << endl;
    double grandAxe, petitAxe;
    cout << "Entrez le grand axe : ";
    cin >> grandAxe;
    cout << "Entrez le petit axe : ";
    cin >> petitAxe;
    MonEllipse.SaisirDimension(grandAxe, petitAxe);
    cout << "Surface: " << MonEllipse.getSurface() << endl;
    cout << "Perimetre: " << MonEllipse.getPerimetre() << endl << endl;

    cout << "------------------------- Instanciation du Cercle --------------------------" << endl;
    double rayon;
    cout << "Entrez le rayon : ";
    cin >> rayon;
    MonCercle = Cercle(rayon);
    cout << "Surface: " << MonCercle.getSurface() << endl;
    cout << "Perimetre: " << MonCercle.getPerimetre() << endl << endl;

    cout << "------------------------- Instanciation du Losange --------------------------" << endl;
    int choix;
    cout << "Voulez-vous créer le losange via : \n";
    cout << "1. Les diagonales\n";
    cout << "2. Le côté et l'angle\n";
    cout << "Votre choix : ";
    cin >> choix;

    if (choix == 1) {
        double d1, d2;
        cout << "Entrez la première diagonale : ";
        cin >> d1;
        cout << "Entrez la deuxième diagonale : ";
        cin >> d2;
        MonLosange.SaisirDimension(d1, d2);
    }
    else if (choix == 2) {
        double cote;
        cout << "Entrez le côté : ";
        cin >> cote;
        MonLosange.SaisirDimension(cote);
    }
    else {
        cout << "Choix invalide, utilisation du constructeur par défaut." << endl;
    }

    cout << "Surface: " << MonLosange.getSurface() << endl;
    cout << "Perimetre: " << MonLosange.getPerimetre() << endl << endl;

    // Attente de la touche 'q' pour quitter
    cout << endl << "Appuyez sur 'q' puis <ENTRER> pour quitter..." << endl;
    do {
        Touche = getchar();
    } while (Touche != 'q');

    return 0;
}
