#include <iostream>
#include <cstdio>

using namespace std;
int times = 0;

void showResult(int A[], int n)
{
    times++;
    cout << "The " << times << "-th Pattern: (" << A[0] << " ";
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            cout << A[i];
        else
            cout << A[i] << " ";
    }
    cout << ")" << endl;
}

void Perm(int A[], int k, int n)
{
    int i;
    if (k == n)
    {
        showResult(A, n);
    }
    else
    {
        for (i = k; i < n; i++)
        {
            swap(A[k], A[i]);
            Perm(A, k + 1, n);
            swap(A[k], A[i]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = i;
    }
    Perm(A, 0, n);
    printf("There are %d permutations in total!\n", times);
    return 0;
}
