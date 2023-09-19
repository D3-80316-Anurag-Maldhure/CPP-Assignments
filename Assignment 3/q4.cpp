#include <iostream>
using namespace std;

class Matrix{
private:
    
    int row;
    int col;
    int **matrix;

public:
    Matrix(){
        this->row=3;
        this->col=3;
        matrix = new int*[row];
        for(int i=0; i<row; i++){
            matrix[i] = new int[col];
        }
    }

    void accept(){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>matrix[i][j];
            }
        }
    }
    void print(){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    // friend Matrix add(Matrix m1, Matrix m2);

    // ~Matrix(){
    //     for(int i=0 ;i<row; i++){
    //         delete matrix[i];
    //     }

    //     delete [] matrix;
    // }
    void add(Matrix m1, Matrix m2){
        for(int i=0 ;i<row; i++){
            for(int j=0; j<col; j++){
                this->matrix[i][j] = m1.matrix[i][j] + m2.matrix[i][j];
            }
        }
    }

    void sub(Matrix m1, Matrix m2){
        for(int i=0 ;i<row; i++){
            for(int j=0; j<col; j++){
                this->matrix[i][j] = m1.matrix[i][j] - m2.matrix[i][j];
            }
        }
    }

    void mul(Matrix m1, Matrix m2){
        for(int i=0;i<row;i++)    
        {    
            for(int j=0;j<col;j++)    
            {    
                this->matrix[i][j]=0;    
                for(int k=0;k<col;k++)    
                {    
                    this->matrix[i][j]+=m1.matrix[i][k]*m2.matrix[k][j];    
                }    
            }    
        }    
    }

    void trans(Matrix m){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                this->matrix[i][j] = m.matrix[j][i];
            }
        }
    }
};

int main(){

    Matrix m1;
    cout<<"Enter the first matrix"<<endl;
    m1.accept();

    Matrix m2;
    cout<<"Enter the Second matrix"<<endl;
    m2.accept();

    Matrix m3; 
    m3.add(m1,m2);
    cout<<"-----"<<endl;
    cout<<"Addition of matrix1 and matrix2 = "<<endl;
    m3.print();
    cout<<"-----"<<endl;

    Matrix m4;
    m4.sub(m1,m2);
    cout<<"-----"<<endl;
    cout<<"Subtraction of matrix1 and matrix2 = "<<endl;
    m4.print();
    cout<<"-----"<<endl;

    Matrix m5;
    m5.mul(m1,m2);
    cout<<"-----"<<endl;
    cout<<"Multiplication of matrix1 and matrix2 = "<<endl;
    m5.print();
    cout<<"-----"<<endl;

    Matrix m6;
    m6.trans(m1);
    cout<<"-------"<<endl;
    cout<<"Transpose of matrix 1="<<endl;
    m6.print();
    m6.trans(m2);
    cout<<"-------"<<endl;
    cout<<"Transpose of matrix 2="<<endl;
    m6.print();

    return 0;
}