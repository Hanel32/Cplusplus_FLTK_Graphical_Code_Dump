/*
    Triangle class derived from Shape class
*/

#ifndef TRIANGLE_H
#define	TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape {
private:
    unsigned int width, height;
    Point b;
    Point c;

public:
	Triangle();
    Triangle(Point a, Point b, Point c, Color d);

    void set_width(unsigned int w);
    unsigned int get_width() const;
    void set_height(unsigned int h);
    unsigned int get_height() const;
    
    void draw();
    void print_parameters();
};

#endif
