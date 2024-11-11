#include <iostream>
#include <vector>
using namespace std;

// Function to find the position of an element in a matrix
pair<int, int> findElement(const vector<vector<int>>& matrix, int element) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == element) {
                return {i, j}; // Return the row and column of the element
            }
        }
    }
    return {-1, -1}; // Return (-1, -1) if the element is not found
}

int main() {
    // Define the matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int element;
    cout << "Enter an element to search: ";
    cin >> element;

    // Find the position of the element
    pair<int, int> position = findElement(matrix, element);

    // Output the result
    if (position.first == -1 && position.second == -1) {
        cout << "Element not found in the matrix. Position: (-1, -1)" << endl;
    } else {
        cout << "Element found at position: (" << position.first << ", " << position.second << ")" << endl;
    }

    return 0;
}
