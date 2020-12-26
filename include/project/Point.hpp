
#ifndef PROJECT_POINT_HPP
#define PROJECT_POINT_HPP

#include <cmath>

struct Point2D
{
    double x{0.0};
    double y{0.0};
};

// Vector operations
inline double norm(const Point2D& lhs)
{
    return std::sqrt(lhs.x*lhs.x+lhs.y*lhs.y);
}

inline constexpr double normsq(const Point2D& lhs)
{
    return lhs.x*lhs.x+lhs.y*lhs.y;
}

inline constexpr double inner(const Point2D& lhs, const Point2D& rhs)
{
    return lhs.x*rhs.x+lhs.y*rhs.y;
}

inline constexpr double outer(const Point2D& lhs, const Point2D& rhs)
{
    return lhs.x*rhs.y - rhs.x*lhs.y;
}

// Algebraic operators
inline Point2D operator+(const Point2D& lhs, const Point2D& rhs)
{
    return {lhs.x+rhs.x, rhs.y + rhs.y};
}

inline Point2D operator-(const Point2D& rhs)
{
    return {-rhs.x, rhs.y};
}

inline Point2D operator-(const Point2D& lhs, const Point2D& rhs)
{
    return lhs + (-rhs);
}

// Boolean operators
inline bool operator==(const Point2D& lhs, const Point2D& rhs)
{
    return lhs.x == rhs.x & lhs.y == rhs.y;
}

inline bool operator!=(const Point2D& lhs, const Point2D& rhs)
{
    return !(lhs==rhs);
}

Point2D doComplexThing(const Point2D& a, const Point2D& b);


#endif // PROJECT_POINT_HPP