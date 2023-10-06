#pragma once

class Vector2 {
public:
    float x, y;

    Vector2(float x, float y);
    Vector2 operator+(const Vector2& other) const;
    Vector2 operator-(const Vector2& other) const;
    Vector2 operator*(float scalar) const;
    Vector2 operator/(float scalar) const;
    float Dot(const Vector2& other) const;
    float Magnitude() const;
    Vector2 Normalize() const;
};
