#include <iostream>
#include "point.h"

int main() {
	point A;
	point B = { -3.f, 1.5f, 0.5f };

	std::cout << "[METHOD point::distance]" << std::endl << 
		"The distance between A(" << A.get_x() << ", " << A.get_y() << ", " << A.get_z() << 
		") and B(" << B.get_x() << ", " << B.get_y() << ", " << B.get_z() << ") is " << A.distance(B) << std::endl;

	std::cout << "[Function distance]" << std::endl <<
		"The distance between A(" << A.get_x() << ", " << A.get_y() << ", " << A.get_z() << 
		") and B(" << B.get_x() << ", " << B.get_y() << ", " << B.get_z() << ") is " << distance(A, B) << std::endl;
	return 0;
}