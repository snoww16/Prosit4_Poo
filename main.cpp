#include <iostream>
#include "Parcours.h"
#include "Point2D.h"
#include "Point3D.h"

using namespace points;

int main() {
    Parcours p;

    p.ajouter(new Point2D(1, 2));
    p.ajouter(new Point3D(3, 4, 5));
    p.ajouter(new Point2D(10, 20));

    std::cout << "Parcours actuel : ";
    p.afficher();

    p.convertirEn3D(0);
    std::cout << "Après conversion du point 0 en 3D : ";
    p.afficher();

    p.convertirEn2D(1);
    std::cout << "Après conversion du point 1 en 2D : ";
    p.afficher();
    
    return 0;
}
