#include "point_2d.h"
#include "main.h"

//Default Constructor
Point_2D::Point_2D()
    : Point_2D(0,0) //Constructor delegation
{

}
//Converting Constructor
Point_2D::Point_2D(int x)
    : Point_2D(x,x) //Constructor delegation
{

}
//Initializer list Constructor
Point_2D::Point_2D(int x, int y)
    :m_x{x}, m_y{y}
{
    std::cout << "Point constructor called for point @" << this << std::endl;
}

//Copy Constructor
Point_2D::Point_2D(Point_2D& point)
    : Point_2D(point.m_x,point.m_y) //Constructor delegation
{

}
//Desctructor
Point_2D::~Point_2D()
{
    std::cout << "Point destructor called for point @" << this << std::endl;
}
//Move Constructor
Point_2D::Point_2D(Point_2D&& point)
{
    swap(&point,this); // pointer swap
}

//Getters
int Point_2D::get_x() const
{
    return this->m_x;
}
int Point_2D::get_y() const
{
    return this->m_y;
}
//Setters
void Point_2D::set_x(int x)
{
    this->m_x = x;
}

void Point_2D::set_y(int y)
{
    this->m_y = y;
}