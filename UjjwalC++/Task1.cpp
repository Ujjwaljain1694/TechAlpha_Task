#include <iostream>
#include <cmath> // for abs function
using namespace std;

void drawSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void drawRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void drawTriangle(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void drawPyramid(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void drawDiamond(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < abs(size - i - 1); j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * (size - abs(size - i - 1)) - 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    int size, width, height;

    cout << "1. Draw a square\n";
    cout << "2. Draw a rectangle\n";
    cout << "3. Draw a triangle\n";
    cout << "4. Draw a pyramid\n";
    cout << "5. Draw a diamond\n";
     int n;
    cout<<"How Many Shapes You Want :";
    cin >> n;
    for(int i =1; i<=n;i++){

    
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the size of the square: ";
            cin >> size;
            drawSquare(size);
            break;
        case 2:
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "Enter the height of the rectangle: ";
            cin >> height;
            drawRectangle(width, height);
            break;
        case 3:
            cout << "Enter the size of the triangle: ";
            cin >> size;
            drawTriangle(size);
            break;
        case 4:
            cout << "Enter the height of the pyramid: ";
            cin >> height;
            drawPyramid(height);
            break;
        case 5:
            cout << "Enter the size of the diamond: ";
            cin >> size;
            drawDiamond(size);
            break;
        default:
            cout << "Invalid choice\n";
            break;
    }
    }
    return 0;
}