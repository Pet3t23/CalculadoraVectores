#pragma once

class Vector4 {
public:
    float x, y, z, w;

    Vector4(float x, float y, float z, float w);
    Vector4 operator+(const Vector4& other) const;
    Vector4 operator-(const Vector4& other) const;
    Vector4 operator*(float scalar) const;
    Vector4 operator/(float scalar) const;
    float Dot(const Vector4& other) const;
    float Magnitude() const;
    Vector4 Normalize() const;
};
