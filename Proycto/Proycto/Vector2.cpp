#include "Vector2.h"
#include <cmath>

Vector2::Vector2(float x, float y) : x(x), y(y) {}

Vector2 Vector2::operator+(const Vector2& other) const {
    return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator-(const Vector2& other) const {
    return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator*(float scalar) const {
    return Vector2(x * scalar, y * scalar);
}

Vector2 Vector2::operator/(float scalar) const {
    if (scalar != 0) {
        return Vector2(x / scalar, y / scalar);
    }
   
    return *this;
}

float Vector2::Dot(const Vector2& other) const {
    return x * other.x + y * other.y;
}

float Vector2::Magnitude() const {
    return std::sqrt(x * x + y * y);
}

Vector2 Vector2::Normalize() const {
    float magnitude = Magnitude();
    if (magnitude != 0) {
        return Vector2(x / magnitude, y / magnitude);
    }
    
    return *this;
}
