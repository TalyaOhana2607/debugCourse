#include "Shape.h"

Shape::Shape() : _area(0), _perimeter(0)
{

}

//add D'tor
Shape::~Shape()
{
}

float Shape::get_area() const
{
	return _area;
}
