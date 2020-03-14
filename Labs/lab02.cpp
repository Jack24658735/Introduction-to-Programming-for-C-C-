#include <iostream>
#include <stdlib.h>

int IsPrime1(int);
using namespace std;

int main()
{
    int i, number, Max_prime = 0;
    cout << "Please enter a limit for the prime number under search:";
    cin >> number;
    for (i = 1; i < number; i++)
    {
        if (IsPrime1(i) == 1)
        {
            Max_prime = i;
        }
    }
    cout << "The largest prime number under 10000 is:" << Max_prime << endl;
    return 0;
}

int IsPrime1(int n)
{
    if (n % 2 == 0 && n != 2)
    {
        return 0;
    }
    int i = 0;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
