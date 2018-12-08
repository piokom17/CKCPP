#include <iostream>

using namespace std;

class Vector3D
{


public:
    //constructor and destructor
    double x;
    double y;
    double z;
    Vector3D(double _x, double _y, double _z);
    ~Vector3D();

    void load();
    double addVector(Vector3D& v1, Vector3D& v2);
    double scalarMulplication(Vector3D& v1, Vector3D& v2);
    string displayResult(Vector3D &v1);


};
