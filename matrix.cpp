#include <iostream>

using namespace std;

void matrixMultiplication(int mat1[2][2], int mat2[2][2], int row, int col){
    int mat3[2][2] = {0};
    cout<<"matrix mat1"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j< col; j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"matrix mat2"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j< col; j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"matrix after multiplication:"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
          for(int k=0; k< col; k++)
          {
              mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
          }
        }
    
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j< col; j++)
        {
            cout<<mat3[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}

int main()
{
    int mat1[2][2] = {{1,3},{4,3}};
    int mat2[2][2] ={{8,6},{3,5}};
    
    matrixMultiplication(mat1, mat2, 2, 2);

    return 0;
}

