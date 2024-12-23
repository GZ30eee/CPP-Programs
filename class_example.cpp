#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }

    int perimeter() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(10, 20);
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}
