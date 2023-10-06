#include "Vector3.h"
#include <cmath>

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(float scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

Vector3 Vector3::operator/(float scalar) const {
    if (scalar != 0) {
        return Vector3(x / scalar, y / scalar, z / scalar);
    }
 
    return *this;
}

Vector3 Vector3::Cross(const Vector3& other) const {
    return Vector3(
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x
    );
}

float Vector3::Dot(const Vector3& other) const {
    return x * other.x + y * other.y + z * other.z;
}

float Vector3::Magnitude() const {
    return std::sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::Normalize() const {
    float magnitude = Magnitude();
    if (magnitude != 0) {
        return Vector3(x / magnitude, y / magnitude, z / magnitude);
    }
   
    return *this;
}
