#include <iostream>
#include <cmath> 

// 1. Rectangle Structure
struct Rectangle {
    double length;
    double width;
};

// 2. Circle Structure
struct Circle {
    double radius;
};

// 3. Cuboid Structure (Using Total Surface Area)
struct Cuboid {
    double length;
    double width;
    double height;
};

// 4. Triangle Structure
struct Triangle {
    double base;
    double height;
};

// Function overloaded to calculate the area for each unique shape structure
double calculateArea(const Rectangle& rect) {
    return rect.length * rect.width;
}

double calculateArea(const Circle& circ) {
    return M_PI * circ.radius * circ.radius;
}

double calculateArea(const Cuboid& cub) {
    // Total surface area formula for a cuboid: 2(lw + lh + wh)
    return 2.0 * (cub.length * cub.width + cub.length * cub.height + cub.width * cub.height);

}

double calculateArea(const Triangle& tri) {
    return 0.5 * tri.base * tri.height;
}

int main() {
    // Creating data records for each shape
    Rectangle myRect = {5.0, 3.0};
    Circle myCircle = {4.0};
    Cuboid myCuboid = {2.0, 3.0, 4.0};
    Triangle myTriangle = {6.0, 5.0};

    // Displaying the results for each shape's area
    std::cout << "=================================\n";
    std::cout << "      SHAPE AREA CALCULATOR      \n";
    std::cout << "=================================\n";
    std::cout << "1. Rectangle Area (5 x 3): " << calculateArea(myRect) << "\n";
    std::cout << "2. Circle Area (Radius 4): " << calculateArea(myCircle) << "\n";
    std::cout << "3. Cuboid Surface Area (2 x 3 x 4): "  << calculateArea(myCuboid)  << "\n";
    std::cout << "4. Triangle Area (Base 6, Height 5): " << calculateArea(myTriangle) << "\n";
    std::cout << "=================================\n";

    return 0;
}