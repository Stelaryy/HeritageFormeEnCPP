// GestionFormes.h - prototypes and readable implementations (non-compiled)
#ifndef GESTIONFORMES_H
#define GESTIONFORMES_H

#include <vector>

// forward declaration
class forme;

// Prototypes
int afficherMenu();
forme* creerForme(int choix);
void afficherCompteurs(const std::vector<forme*>& formes);

#endif // GESTIONFORMES_H