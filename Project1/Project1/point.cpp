#include "point.h"


point::point(float x, float y, float z) : m_x(x), m_y(y), m_z(z)
{
}

float point::distance(const point& other) const
{
	return sqrt(pow(other.m_x - m_x, 2) + pow(other.m_y - m_y, 2) + pow(other.m_z - m_z, 2));
}

float distance(const point & A, const point & B)
{
	return A.distance(B);
}


float point::get_x() const
{
	// TODO: Add your implementation code here.
	return m_x;
}


float point::get_y() const
{
	// TODO: Add your implementation code here.
	return m_y;
}


float point::get_z() const
{
	// TODO: Add your implementation code here.
	return m_z;
}
