#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
}

//add D'tor
Triangle::~Triangle()
{
}

//delete : 
/*	if (has_depth)
	{
		throw std::exception("3D triangle is not implemented yet!");
	} 
*/
float Triangle::get_area() const
{
	return float(0.5 * _base * _height);
}
