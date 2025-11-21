#pragma once
#include "Point.h"

namespace points{
    class Point3D : public Point{
        private :
            double x;
            double y;

        public :
            Point3D(double,double);
            Point3D(*Point);
            double get_x() const override;
            double get_y() const override;
            double get_z() const override;
            void set_x(double) override;
            void set_y(double) override;
            void set_z(double) override;
            void afficher() const override;
    }
}