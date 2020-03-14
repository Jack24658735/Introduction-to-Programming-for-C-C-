#include <iostream>
#include <cstdlib>
#include <iomanip>
#define MAX_ROW 100
#define MAX_COL 100

using namespace std;

class matrix
{
private:
    int row_count;
    int col_count;
    double M[MAX_ROW][MAX_COL];

public:
    matrix(int row, int col)
    {
        row_count = row;
        col_count = col;
        double M[row][col];
    }

    void set_an_entry(int x, int y, double value)
    {
        M[x][y] = value;
    }

    double get_an_entry(int x, int y)
    {
        return M[x][y];
    }

    int get_row_count()
    {
        return row_count;
    }

    int get_col_count()
    {
        return col_count;
    }

    matrix operator+(matrix &M2)
    {
        matrix sum(row_count, col_count);
        for (int i = 0; i < row_count; i++)
        {
            for (int j = 0; j < col_count; j++)
            {
                double temp[i][j];
                temp[i][j] = this->get_an_entry(i, j) + M2.get_an_entry(i, j);
                sum.set_an_entry(i, j, temp[i][j]);
            }
        }
        return sum;
    }
};

ostream &operator<<(ostream &os, matrix &M)
{
    for (int i = 0; i < M.get_row_count(); i++)
    {
        for (int j = 0; j < M.get_col_count(); j++)
        {
            os << left << setw(4) << M.get_an_entry(i, j);
        }

        os << endl;
    }
    return os;
}

int main(void)
{
    matrix m1(2, 2), m2(2, 2), sum(2, 2);
    m1.set_an_entry(0, 0, 10);
    m1.set_an_entry(0, 1, 20);
    m1.set_an_entry(1, 0, 30);
    m1.set_an_entry(1, 1, 40);
    m2.set_an_entry(0, 0, 1);
    m2.set_an_entry(0, 1, 2);
    m2.set_an_entry(1, 0, 3);
    m2.set_an_entry(1, 1, 4);

    sum = m1 + m2;
    cout << "Matrix M1: " << endl
         << m1;
    cout << "Matrix M2: " << endl
         << m2;
    cout << "Matrix Sum: " << endl
         << sum;
    return 0;
}
