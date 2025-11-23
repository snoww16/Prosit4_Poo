#include "Point3D.h"
#include "Point.h"
#include <iostream>

namespace points{

    Point3D::Point3D(double x, double y, double z) : Point::Point(), x(x), y(y), z(z){}
    Point3D::Point3D(Point* old) : x(old->get_x()), y(old->get_y()), z(0){}

    double Point3D::get_x() const {return x;}
    double Point3D::get_y()const {return y;}
    double Point3D::get_z()const {return z;}

    void Point3D::set_x(double newx) {this->x = newx;}
    void Point3D::set_y(double newy) {this->y = newy;}
    void Point3D::set_z(double newz) {this->z = newz;}

    void Point3D::afficher() const {
        std::cout<<"co x : "<<get_x()<<", co y : "<<get_y()<<", co z : "<<get_z()<<"/ ";
    }
}