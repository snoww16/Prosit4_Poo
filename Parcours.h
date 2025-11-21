#pragma once
#include <vector>
#include "Point.h"


namespace points{


class Parcours {
    private:
        std::vector<Point*> liste;

    public:
        Parcours();
        ~Parcours();

        void ajouter(Point*);
        void afficher() const;

        void convertirEn2D(int);
        void convertirEn3D(int);
};
}