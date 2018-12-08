#include <iostream>
#include "Vector3D.h"

using namespace std;

Vector3D::Vector3D(double _x, double _y, double _z)
{
    this->x = _x;
    this->y = _y;
    this->z = _z;

}
double Vector3D::addVector(Vector3D &v1, Vector3D &v2)
{
    v1.x = v1.x + v2.x;
    v1.y = v1.y + v2.y;
    v1.z = v1.z + v2.z;
}
string Vector3D::displayResult(Vector3D &v1)
{
    cout<<"Wektor:["<<v1.x<<","<<v1.y<<","<<v1.z<<"]"<<endl;
}
void Vector3D::load()
{
    //narazie bez sensu moze potem sie przyda
    x = 5;
    y = 6;
    z = 8;
}

