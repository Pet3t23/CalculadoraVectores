#pragma once

class Vector3 {
public:
    float x, y, z;

    Vector3(float x, float y, float z);
    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator*(float scalar) const;
    Vector3 operator/(float scalar) const;
    Vector3 Cross(const Vector3& other) const;
    float Dot(const Vector3& other) const;
    float Magnitude() const;
    Vector3 Normalize() const;
};
