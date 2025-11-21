#include "Point2D.h"
#include "Point.h"
#include <iostream>

namespace points{

    Point2D::Point2D(double x, double y) : x(x), y(y){}
    Point2D::Point2D(Point* old) : x(old.get_x()), y(old.get_y()){}

    double Point2D::get_x() const {return x;}
    double Point2D::get_y()const {return y;}

    void set_x(double newx) {this->x = newx;}
    void set_y(double newy) {this->y = newy;}

    void afficher() const {
        std::cout<<"co x : "<<get_x()<<", co y : "<<get_y();
    }
}