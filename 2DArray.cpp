#include<iostream>
using namespace std;

pair<int, int> linearsearch(int mat[][3], int rows, int cols, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == key) {
                return {i, j}; // Return the position as a pair
            }
        }
    }
    return {-1, -1}; // Return (-1, -1) if the key is not found
}

int main() {
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;
    int key = 1;
    
    pair<int, int> result = linearsearch(matrix, rows, cols, key);
    if (result.first != -1) {
        cout << "Key found at: (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Key not found: (-1, -1)" << endl;
    }

    return 0;
}
