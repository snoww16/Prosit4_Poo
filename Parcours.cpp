#include "Parcours.h"
#include "Point2D.h"
#include "Point3D.h"
#include <iostream>


namespace points {

    Parcours::Parcours(){};
    Parcours::~Parcours(){for (auto p :liste){delete p;}}

    void Parcours::ajouter(Point* p){liste.push_back(p);}
    void Parcours::afficher(){
        for (auto p :liste){
            p->afficher();
            std::cout<<" ";
        }
        std::endl;
    }

    void Parcours::convertirEn2D(int i){
        Point* old = liste[i];
        Point* new = new Point2D(old);
        delete old;
        liste[i] = new;
    }

        void Parcours::convertirEn3D(int i){
        Point* old = liste[i];
        Point* new = new Point3D(old);
        delete old;
        liste[i] = new;
    }
}