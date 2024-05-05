#include <iostream>

using namespace std;

int main() {
    int rows, columns;

    do {
        cout << "Enter the number of rows (0 to 3): ";
        cin >> rows;
    } while (rows < 0 || rows > 3);

    do {
        cout << "Enter the number of columns (0 to 3): ";
        cin >> columns;
    } while (columns < 0 || columns > 3);

    double* array = new double[rows * columns];

   if (!array) {
        cerr << "Error: Memory allocation failed!" << endl;
        return 1;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            array[i * columns + j] = i * columns + j; 
        }
    }

    cout << "The array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << array[i * columns + j] << " ";
        }
        cout << endl;
    }

    delete[] array;

    return 0;
}
