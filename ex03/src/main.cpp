#include "Point.hpp"
#include <cmath>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point A(1, 0);
    Point B(0, 1);
    Point C(1, 1);
    Point m(0.5, 0.5);
    Point n(1.01, 1);

    std::cout << (bsp(A, B, C, m) ? "IN" : "OUT") << std::endl;
    std::cout << (bsp(A, B, C, n) ? "IN" : "OUT") << std::endl;
    return (0);
}
