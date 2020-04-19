

#include<iostream>
#include<iomanip>
using namespace std;

void calculate_transpose(float matrix[5][5], int rows, int cols);
int main()
{

	float matrix[5][5];
	int i, j, rows, cols;
  	cin >> rows;
  	cin >> cols;
   	for( i = 0; i < rows; i++){
       for( j = 0; j < cols; j++)
       {
           cin >> matrix[i][j];
       }
      					}
    calculate_transpose(matrix,rows,cols);
    return 0;
    }

void calculate_transpose(float matrix[5][5], int rows, int cols)
{   int i,j;
    float transpose_matrix[5][5];
       for( i = 0; i < rows; i++){
           for( j = 0; j < cols; j++){
               transpose_matrix[j][i] = matrix[i][j];
           							 }
                                 }

       for( i= 0; i < cols; i++){
           for( j = 0; j < rows; j++){
           		cout << fixed << setprecision(1);
               	cout << transpose_matrix[i][j] << " ";
                                     }
           cout << endl;
                                }

}

