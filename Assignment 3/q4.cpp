// Q4. Write a Matrix class. Allocate memory dynamically in parameterized constructor.
// Also write parameter-less constructor. Write accept() and print() functions.
// Also provide add(), subtract(), multiply() and transpose() function.

#include <iostream>
using namespace std;

// ERROR

class Matrix
{
private:
    Matrix** matrixPtr;
    int data;
    int numberOfRows;
    int numberOfColumns;

public:
    Matrix()
    {
        cout << "Parameterless constructor called to make a default 2D matrix of 3*3 with value 0 in each" << endl;
        this->matrixPtr = new Matrix*[3];
        this->numberOfRows = 3;
        for (int i = 0; i < 3; i++)
        {
            this->matrixPtr[i] = new Matrix[3];
            this->numberOfColumns = 3;
            for (int j = 0; j < 3; j++)
            {
                this->matrixPtr[i][j].data = 0;
            }
        }
    }
    Matrix(int row, int col)
    {
        this->matrixPtr = new Matrix *[row];
        this->numberOfRows = row;
        for (int i = 0; i < row; i++)
        {
            this->matrixPtr[i] = new Matrix[col];
            this->numberOfColumns = col;
        }
    }

    ~Matrix()
    {
        // for(int i=0; i<numberOfRows; i++){
        //     delete[] matrixPtr[i];
        // }
        // delete[] matrixPtr;
    }

    int getNumberOfRows()
    {
        return this->numberOfRows;
    }
    int getNumberOfColumns()
    {
        return this->numberOfColumns;
    }
    Matrix ** getMatrixPtr(){
        return this->matrixPtr;
    }

    void accept()
    {
        for (int i = 0; i < getNumberOfRows(); i++)
        {
            for (int j = 0; j < getNumberOfColumns(); j++)
            {
                cout << " Enter the value at [" << i << "] [" << j << "]" << endl;
                cin >> matrixPtr[i][j];
            }
        }
    }

    void print()
    {
        cout << "\nMatrix : \n"
             << endl;
        for (int i = 0; i < getNumberOfRows(); i++)
        {
            for (int j = 0; j < getNumberOfColumns(); j++)
            {
                cout << matrixPtr[i][j] << "  " << endl;
            }
            cout << endl;
        }
    }
};

// global functions
Matrix add(Matrix &matrixA, Matrix &matrixB, Matrix &resultantMatrix)
{
    if (matrixA.getNumberOfRows() == matrixB.getNumberOfRows() && matrixA.getNumberOfRows() == matrixB.getNumberOfColumns())
    {
        for (int i = 0; i < matrixA.getNumberOfRows(); i++)
        {
            for (int j = 0; j < matrixA.getNumberOfColumns(); j++)
            {
                // resultantMatrix.
                resultantMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "The addition operation is not possible as dimension of two given matrix is not equal" << endl;
    }
}

Matrix subtract()
{
    if (matrixA.getNumberOfRows() == matrixB.getNumberOfRows() && matrixA.getNumberOfRows() == matrixB.getNumberOfColumns())
    {
        for (int i = 0; i < matrixA.getNumberOfRows(); i++)
        {
            for (int j = 0; j < matrixA.getNumberOfColumns(); j++)
            {
                matrixResultant.matrixPtr[i][j] = matrixA.matrixPtr[i][j] - matrixB.matrixPtr[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "The subtraction operation is not possible as dimension of two given matrix is not equal" << endl;
    }
}

Matrix multiply()
{
    if (matrixA.getNumberOfRows() == matrixB.getNumberOfColumns())
    {
        for (int i = 0; i < matrixA.getNumberOfRows(); i++)
        {
            for (int j = 0; j < matrixA.getNumberOfColumns(); j++)
            {
                matrixResultant.matrixPtr[i][j] = matrixA.matrixPtr[i][j] matrixB.matrixPtr[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "The multiplication operation as number of rows of matrix A is not equals to number of columns of matrix B " << endl;
    }
}

Matrix transpose()
{
    for (int i = 0; i < matrix.getNumberOfRows(); ++i)
    {
        for (int j = 0; j < matrix.getNumberOfColumns(); ++j)
        {
            matrix.matrixPtr[j][i] = matrix.matrixPtr[i][j];
        }
    }
}

enum menu
{
    EXIT,
    PrintMatrix,
    AcceptMatrix,
    AdditionOfTwoMatrices,
    SubtractionOfTwoMatrices,
    MultiplicationOfTwoMatrices,
    TransposeOfMatrix
};

int main()
{
    int numberOfRows;
    int numberOfColumns;
    int choice;
    int transposeChoice;

    // cout << " " << endl;
    Matrix **matrix1 = new ;
    Matrix **matrix2;
    Matrix **resultantMatrix;

    cout << "\nThis is program for creation and operations on two matrix" << endl;
    cout << " Please select from the choice below : " << endl;
    cout << "0. EXIT \n1. PrintMatrix \n2. AcceptMatrix \n3. AdditionOfTwoMatrices \n4. SubtractionOfTwoMatrices \n5.MultiplicationOfTwoMatrices \n6. TransposeOfMatrix" << endl;
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case PrintMatrix:
            cout << "Matrix 1 : " << endl;
            matrix1.print();
            cout << "Matrix 2 : " << endl;
            matrix2.print();
            break;
            cout << "Resultant Matrix : " << endl;
            resultantMatrix.print();
            break;

        case AcceptMatrix:
            cout << "Matrix 1 : " << endl;
            matrix1.accept();
            cout << "Matrix 2 : " << endl;
            matrix2.print();
            break;

        case AdditionOfTwoMatrices:
            Matrix::add(matrix1, matrix2, resultantMatrix);
            break;

        case SubtractionOfTwoMatrices:
            subtract(matrix1, matrix2, resultantMatrix);
            break;

        case MultiplicationOfTwoMatrices:
            Matrix::multiply(matrix1, matrix2, resultantMatrix);
            break;

        case TransposeOfMatrix:
            cout << "Which matrix you want to transpose? (1. Matrix A, 2. Matrix B, 3. Resultant Matrix)" << endl;
            cin >> transposeChoice;
            switch (transposeChoice)
            {
            case 1:
                Matrix::transpose(matrix1);
                break;
            case 2:
                Matrix::transpose(matrix2);
                break;
            case 3:
                Matrix::transpose(resultantMatrix);
                break;

            default:
                cout << "Please enter a valid choice" << endl;
            }
            break;

        default:
            cout << "You have entered a wrong option, please enter a correct option" << endl;
            break;
        }
    }

    return 0;
}