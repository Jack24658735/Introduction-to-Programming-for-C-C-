#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

//Class of Complex numbers
class complex_number
{
private:
    double re, img;
public:
    complex_number(double, double);
    void set_a_complex_number(double, double);
    double get_real();
    double get_img();
    double get_magnitude();
};

complex_number::complex_number(double x = 0.0, double y = 0.0)
{
    re = x;
    img = y;
}

void complex_number::set_a_complex_number(double x, double y)
{
    re = x;
    img = y;
}

double complex_number::get_real()
{
    return re;
}

double complex_number::get_img()
{
    return img;
}

double complex_number::get_magnitude()
{
    double value;
    value = sqrt(re * re + img * img);
    return value;
}


//regular function prototypes

void selectionSort(complex_number C[], const int ARRAY_SIZE);
void swapValues(complex_number &, complex_number &); //swap values by using call-by-reference
ostream& operator<<(ostream &os, complex_number &x);

int main()
{
    complex_number A[7];
    const int ARRAY_SIZE = 7;
    A[0].set_a_complex_number(2, 7);
    A[1].set_a_complex_number(4, 0);
    A[2].set_a_complex_number(9, 4);
    A[3].set_a_complex_number(8, 8);
    A[4].set_a_complex_number(2, 4);
    A[5].set_a_complex_number(5, 5);
    A[6].set_a_complex_number(3, 2);
    cout << "Original Array of Complex Numbers: " << endl;

    for (auto &num : A) //ranged for loop
    {
        cout << num << " ";
    }
    cout << endl;

    selectionSort(A, ARRAY_SIZE);
    cout << endl;
    cout << "The Median Element of the Array is: " << A[(ARRAY_SIZE - 1) / 2] << endl;
    return 0;
}
void swapValues(complex_number &C1, complex_number &C2)
{
    complex_number temp;
    temp = C1;
    C1 = C2;
    C2 = temp;
}

void selectionSort(complex_number C[], const int ARRAY_SIZE)
{
    int smallest = 0;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        smallest = i;
        for (int j = i + 1; j < ARRAY_SIZE; j++ )
        {
            if (C[j].get_magnitude() < C[smallest].get_magnitude())
            {
                smallest = j;
            }
        }
        swapValues(C[i], C[smallest]);
    }
}

ostream& operator<<(ostream &os, complex_number &x)
{
    os << x.get_real() << "+j" << x.get_img();
    return os;
}

