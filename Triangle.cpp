/*
    Triangle class derived from Shape class
*/

#include <iostream>
#include <FL/fl_draw.H>
#include "Triangle.h"

using namespace std;

Triangle::Triangle()
    : Shape(Point(0,0), black) {}

Triangle::Triangle(Point a, Point b, Point c, Color d)
    : Shape(a, d), b(b), c(c) {}


void Triangle::draw() {
	fl_color(linecolor);
	fl_loop(position.x, position.y, b.x, b.y, c.x, c.y);
}

void Triangle::print_parameters() {
	cout << "Triangle" << endl << 
	"Base: "  << b.x - position.x << " Height: " << c.y - position.y <<
	" Point(" << position.x << ", " << position.y << ")" << endl;
}
