#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

//void reverse_nums(int&,int&);

int main(void)
{
    printf("Hello world!\n");

    cout << "Original randomly generated Array : ";

    array<int, 9> num;
    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);

    int i;
    for (i = 0; i < 9; i++)
    {
        num[i] = rand() % 20;
        cout << setw(2) << num[i] << " ";
    }
    cout << endl;
    cout << "Array after the reversal" << setw(12) << ": ";
    /*for (i=0; i<4; i++)
    {
        reverse_nums(num[i],num[8-i]);
    }*/
    reverse(num.begin(), num.end());
    for (i = 0; i < 9; i++)
    {
        cout << setw(2) << num[i] << " ";
    }
    cout << endl;
    return 0;
}

/*void reverse_nums(int &num1,int &num2)
{
    swap(num1,num2);
}*/
