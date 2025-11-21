#pragma once
#include "Point.h"

namespace points{
    class Point2D : public Point{
        private :
            double x;
            double y;

        public :
            Point2D(double,double);
            Point2D(Point*);
            double get_x() const override;
            double get_y() const override;
            void set_x(double) override;
            void set_y(double) override;
            void afficher() const override;
    }
}