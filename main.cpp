#include <iostream>
#include "Vector3D.h"
using namespace std;

int main()
{
    cout << "Hello in Vector3D programm, przedmiot CKCPP" << endl;
    Vector3D *v1 = new Vector3D(2,2,2);
    Vector3D *v2 = new Vector3D(2,2,2);
    v1->addVector(*v1,*v2);
    v1->displayResult(*v1);
    return 0;
}
