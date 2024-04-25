#include <iostream>

using namespace std;

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    int choice;
    double area;
    
    while (true) {
        cout << "Please select a shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        if (choice == 4) {
            // Quit the program
            cout << "Exiting the program. Goodbye!\n";
            break;
        }
        
        if (choice < 1 || choice > 4) {
            cout << "Invalid input. Please enter a valid choice (1-4).\n";
            continue;
        }

        switch (choice) {
            case 1: {
                // Calculate area of a triangle
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = calculateTriangleArea(base, height);
                cout << "The area of the triangle is: " << area << "\n";
                break;
            }
            case 2: {
                // Calculate area of a rectangle
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = calculateRectangleArea(length, width);
                cout << "The area of the rectangle is: " << area << "\n";
                break;
            }
            case 3: {
                // Calculate area of a square
                double side;
                cout << "Enter the side of the square: ";
                cin >> side;
                area = calculateSquareArea(side);
                cout << "The area of the square is: " << area << "\n";
                break;
            }
        }
    }

    return 0;
}