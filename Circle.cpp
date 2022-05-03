#include "circle.h"
using namespace std;
double Circle::circumference() {
	return 2 * 3.14 * r;
}

double Circle::area() {
	return 3.14 * r * r;
}

ostream& operator<<(std::ostream& out, const Circle& c) {
	return out << "Circle( " << c.r << " )";
}