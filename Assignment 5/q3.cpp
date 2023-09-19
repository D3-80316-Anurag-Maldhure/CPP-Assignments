#include <iostream>
using namespace std;

class Matrix
{
private:
    int row;
    int col;
    int **mat;

public:
    Matrix()
    {
        this->row = 3;
        this->col = 3;
        this->mat = new int*[row];
        for(int i = 0; i < row; i++)
            {
                this->mat[i] = new int[col];
            }

    }

    Matrix(Matrix &other)
    {
    	this->row = 3;
        this->col = 3;
        this->mat = new int*[row];
        for(int i = 0; i < row; i++)
            {
                this->mat[i] = new int[col];
            }
        cout << "Inside Copy Constructor" << endl;
        for(int k =0; k<row ;k++)
        {
            for(int j = 0; j<col; j++)
            {
                this->mat[k][j] = other.mat[k][j];
            }
        }
        return;
    }

    void acceptData()
    {
        for(int i =0; i<row ;i++)
        {
            for(int j = 0; j<col; j++)
            {
                cin >> mat[i][j];
            }
        }
    };

    void printData()
    {
        cout << "--------------------------" << endl;
        for(int i =0; i<row ;i++)
        {
            for(int j = 0; j<col; j++)
            {
                cout <<  mat[i][j] << " " ;
            }
            cout << endl;
        }
        cout << "--------------------------" << endl;
    }

    void add(Matrix m1, Matrix m2)
    {
        for(int i =0; i<row ;i++)
        {
            for(int j = 0; j<col; j++)
            {
                this->mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
            }
        }
    }

    void sub(Matrix m1, Matrix m2)
    {
        for(int i =0; i<row ;i++)
        {
            for(int j = 0; j<col; j++)
            {
                this->mat[i][j] = m1.mat[i][j] - m2.mat[i][j];
            }
        }
    }

    void mul(Matrix m1, Matrix m2)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                for(int k = 0; k < row; k++)
                {
                this->mat[i][j] = this->mat[i][j] + m1.mat[i][k] * m2.mat[k][j];
                }
            }
        }
    }

    Matrix operator=(Matrix &m)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                this->mat[i][j] = m.mat[i][j];
            }
        }
    }

    void tran()
    {
        Matrix m;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                m.mat[i][j] = this->mat[i][j];
            }
        }

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                this->mat[i][j] = m.mat[j][i];
            }
        }
    }
};

int main()
{

    Matrix m1;
    m1.acceptData();
    m1.printData();
     
    Matrix m2;
    m2 = m1;
    m2.printData();

    // m2.tran();
    // m1.printData();
    // m2.printData();

    Matrix m3 = m1;
    m3.printData();

};
