#include <iostream>
using namespace std;

int main() {
    const int size = 6;  // Total number of elements in a 2x3 matrix
    int matrix[size];
    int temp;

    // Input the elements of the matrix from the user
    cout << "Enter 6 elements for the matrix:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> matrix[i];
    }

    // Manually sort the 1D array
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (matrix[i] > matrix[j]) {
                // Swap elements
                temp = matrix[i];
                matrix[i] = matrix[j];
                matrix[j] = temp;
            }
        }
    }

    // Output the sorted matrix in 2x3 form
    cout << "\nSorted Matrix (2x3):\n";
    for (int i = 0; i < size; ++i) {
        cout << matrix[i] << " ";
        if ((i + 1) % 3 == 0)  // Break the line after every 3 elements
            cout << endl;
    }

    return 0;
}
