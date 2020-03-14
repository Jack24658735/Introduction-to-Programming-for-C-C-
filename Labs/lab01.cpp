#include <iostream>
using namespace std;

int main(void)
{
    double r, pi = 3.14, surface_area, volume;
    cout << "Please enter the radius of a sphere(in meter):";
    cin >> r;
    surface_area = 4 * pi * r * r;
    cout << "The surface area of the sphere is:" << surface_area << "(square meter)" << endl;
    volume = (double)4 / 3 * pi * r * r * r;
    cout << "The volume of the sphere is:" << volume << "(cubic meter)" << endl;
    return 0;
}
