//
// Created by javasucks on 9/12/18.
//

#ifndef PHYSICSBOI_VCTR2D_H
#define PHYSICSBOI_VCTR2D_H


#include "shape3D.h"

class Vctr2D {


    shape2D from;
    shape2D to;
    double magnitude;
    void applyForce();
    Vctr2D(shape2D From, shape2D To, double_t Magnitude);

};


#endif //PHYSICSBOI_VCTR2D_H
