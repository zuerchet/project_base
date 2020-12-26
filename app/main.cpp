#include <iostream>

#include "project/Point.hpp"

int main(int argc, char** argv)
{
    Point2D a{1.0, 3.3};
    std::cout << "Hello world!\n" << a.x << " " << a.y << "\n";
    return 0;
}