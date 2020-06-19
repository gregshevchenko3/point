#pragma once
#include <cmath>
class point
{
	float m_x;
	float m_y;
	float m_z;
public:
	point(float x = 0.f, float y = 0.f, float z = 0.f);
	float distance(const point& other) const;
	float get_x() const;
	float get_y() const;
	float get_z() const;
};

float distance(const point& A, const point& B);
