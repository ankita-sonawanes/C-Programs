#include<iostream>
using namespace std;

int getMaxSum(int mat[][3], int rows, int cols) {
    int maxColsSum= INT16_MIN;
    for (int j = 0; j < cols; j++) {
        int colssumI=0;
        for (int i = 0; i < rows; i++) {
            colssumI +=mat[i][j];
            
            }
            maxColsSum = max(maxColsSum,colssumI);
        }
        return maxColsSum;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    cout<<getMaxSum(matrix,rows,cols)<<endl;
    
    
    

    return 0;
}
