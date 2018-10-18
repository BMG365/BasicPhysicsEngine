//
// Created by javasucks on 9/12/18.
//





#include "shape2D.h"
#include <cmath>


Polygon::Polygon(int EdgeCount, std::vector<double> EdgesX, std::vector<double> EdgesY, double VelocityX, double VelocityY) {


    double A = 0;
    double X = 0;
    double Y = 0;
    for(int i = 0; i < EdgeCount; i++){
        A+=(EdgesX[i]*EdgesY[i+1] - EdgesX[i+1]*EdgesY[i]);
        X+=(EdgesX[i] + EdgesX[i+1]) * (EdgesX[i] * EdgesY[i+1] - EdgesX[i+1] * EdgesY[i]);
        Y+=(EdgesY[i] + EdgesY[i+1]) * (EdgesX[i] * EdgesY[i+1] - EdgesX[i+1] * EdgesY[i]);
    }
    A *= .5;
    CX = X/(6*A);
    CY = Y/(6*A);

    mass = A;
    edgesX = EdgesX;
    edgesY = EdgesY;
    VY = VelocityY;
    VX = VelocityX;


}

Polygon::Polygon(int EdgeCount, std::vector<double> EdgesX, std::vector<double> EdgesY, double VelocityX, double VelocityY, double M) {

    double A = 0;
    double X = 0;
    double Y = 0;
    for(int i = 0; i < EdgeCount; i++){
        A+=(EdgesX[i]*EdgesY[i+1] - EdgesX[i+1]*EdgesY[i]);
        X+=(EdgesX[i] + EdgesX[i+1]) * (EdgesX[i] * EdgesY[i+1] - EdgesX[i+1] * EdgesY[i]);
        Y+=(EdgesY[i] + EdgesY[i+1]) * (EdgesX[i] * EdgesY[i+1] - EdgesX[i+1] * EdgesY[i]);
    }
    A *= .5;
    CX = X/(6*A);
    CY = Y/(6*A);

    mass = M;
    edgesX = EdgesX;
    edgesY = EdgesY;
    VY = VelocityY;
    VX = VelocityX;
}

Polygon::Polygon(int EdgeCount, std::vector<double> EdgesX, std::vector<double> EdgesY) {

}

Polygon::Polygon(int EdgeCount, std::vector<double> EdgesX, std::vector<double> EdgesY, double VelocityX, double VelocityY, double density): shape2D(){

    double A = 0;
    double X = 0;
    double Y = 0;
    for(int i = 0; i < EdgeCount; i++){
        A+=(EdgesX[i]*EdgesY[i+1] - EdgesX[i+1]*EdgesY[i]);
        X+=(EdgesX[i] + EdgesX[i+1]) * (EdgesX[i] * EdgesY[i+1] - EdgesX[i+1] * EdgesY[i]);
        Y+=(EdgesY[i] + EdgesY[i+1]) * (EdgesX[i] * EdgesY[i+1] - EdgesX[i+1] * EdgesY[i]);
    }
    A *= .5;
    CX = X/(6*A);
    CY = Y/(6*A);

    mass = A*density;
    edgesX = EdgesX;
    edgesY = EdgesY;
    VY = VelocityY;
    VX = VelocityX;
}





Sphere::Sphere(double Radius, double CmassX, double CmassY, double Mass) {

    CX = CmassX;
    CY = CmassY;
    mass = Mass;
    radius = Radius;
    VX = 0;
    VY = 0;
    rotation = 0;
}

Sphere::Sphere(double Radius, double CmassX, double CmassY, double density): shape2D()
{
    CX = CmassX;
    CY = CmassY;
    mass = density * Radius * M_PI * M_PI;
    radius = Radius;
    VX= 0;
    VY= 0;
    rotation = 0;
}

Sphere::Sphere(double Radius, double CmassX, double CmassY, double Mass, double VelocityX, double VelocityY) {

    CX = CmassX;
    CY = CmassY;
    mass = Mass;
    radius = Radius;
    VX= VelocityX;
    VY= VelocityY;
    rotation = 0;
}


Sphere::Sphere(double Radius, double CmassX, double Cmassy, double density, double VelocityX, double VelocityY):shape2D(){

    CX = CmassX;
    CY = Cmassy;
    mass = density * Radius * M_PI * M_PI;
    radius = Radius;
    VX = VelocityX;
    VY = VelocityY;
    rotation = 0;
}


Sphere::Sphere(double Radius, double CmassX, double Cmassy, double density, double VelocityX, double VelocityY,
               double Rotation) {

    CX = CmassX;
    CY = Cmassy;
    mass = density * Radius * M_PI * M_PI;
    radius = Radius;
    VX = VelocityX;
    VY = VelocityY;
    rotation = Rotation;

}

Sphere::Sphere(double Radius, double CmassX, double CmassY, double density, double Rotation) {
    CX = CmassX;
    CY = CmassY;
    mass = density * Radius * M_PI * M_PI;
    radius = Radius;
    VX = 0;
    VY = 0;
    rotation = Rotation;
}

void Sphere::collision(Sphere A, Sphere B) {

}

Sphere::Sphere(double Radius, double CmassX, double Cmassy, double Mass, double VelocityX, double VelocityY, double Rotation):shape2D(){

    CX = CmassX;
    CY = Cmassy;
    mass = Mass;
    radius = Radius;
    VX = VelocityX;
    VY = VelocityY;
    rotation = Rotation;
}
Sphere::Sphere(double Radius, double CmassX, double CmassY, double density, double Rotation): shape2D(){
    CX = CmasesX;
    CY = CmassY;
    mass = density * Radius * M_PI * M_PI;
    radius = Radius;
    VX = 0;
    VY = 0;
    rotation = Rotation;
}

void shape2D::collision(shape2D A, shape2D b) {
}
