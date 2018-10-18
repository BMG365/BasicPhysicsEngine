//
// Created by javasucks on 9/12/18.
//

#ifndef PHYSICSBOI_SHAPE3D_H
#define PHYSICSBOI_SHAPE3D_H

#import <vector>

#include <cmath>

 class shape2D {

 public:



     double rotation;//angular momentum, right hand rule.
     double mass;//mass of object
     double CX;//location of center of mass in X
     double CY;//location of center of mass in Y
     double VY;//veolcity ov cX in X
     double VX;//velocity of cY in Y

     shape2D(){

     }

 };


class Sphere: public shape2D{
    double radius;

    /*
     * Spheres have a radius, a center of mass, mass, velocity, angular momentum
     * if mass isnt passed, it is assumed a density of 1 and mass is implied to be equivalent to area
     *
     */
    Sphere(double Radius, double CmassX, double CmassY, double Mass): shape2D()
    Sphere(double Radius, double CmassX, double CmassY, double Mass, double Rotation): shape2D()
    Sphere(double Radius, double CmassX, double Cmassy, double Mass, double VelocityX, double VelocityY):shape2D()
    Sphere(double Radius, double CmassX, double Cmassy, double Mass, double VelocityX, double VelocityY, double Rotation):shape2D()

    void collision(Sphere A, Sphere B);
};

class Polygon: public shape2D{

    int edgesCount;


    std::vector<double> edgesX;
    std::vector<double> edgesY;

    Polygon(int EdgeCount, std::vector<double> EdgesX, std::vector<double> EdgesY): shape2D()
    Polygon(int EdgeCount, std::vector<double> EdgesX, std::vector<double> EdgesY, double VelocityX, double VelocityY): shape2D()
    Polygon(int EdgeCount, std::vector<double> EdgesX, std::vector<double> EdgesY, double VelocityX, double VelocityY, double M): shape2D()


};




#endif //PHYSICSBOI_SHAPE3D_H
