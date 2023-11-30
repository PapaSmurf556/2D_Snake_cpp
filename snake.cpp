#include "snake.h"
#include "point_2d.h"
#include "main.h"

//Default Constructor
Snake::Snake()
    :Snake(0,0)
{}

Snake::Snake(int x, int y)
{
    m_snake_point = std::make_unique<Point_2D>(x,y);
    m_snake_body_count++;
    std::cout << "Snake constructor called for point @" << this << std::endl;
}

//Initializer list Constructor
// Input parameter not const because of the move operation
Snake::Snake(Point_2D& point)
    :m_snake_point{std::move(&point)}
{
    m_snake_body_count++;
    std::cout << "Snake constructor called for point @" << this << std::endl;
}

//Copy Constructor
Snake::Snake(Snake& snake)
    : Snake(snake.get_Point_2D().m_x, snake.get_Point_2D().m_y)
{}

//Move Constructor
Snake::Snake(Snake&& snake)
{
    swap(&snake,this);
}

//Getters
const Point_2D& Snake::get_Point_2D() const
{
    return *m_snake_point;
}

//Getters
int Snake::get_x() const
{
    return (*m_snake_point).m_x;
}

//Getters
int Snake::get_y() const
{
    return (*m_snake_point).m_y;
}

//Setters
void Snake::set_Point_2D(Point_2D& point)
{
    m_snake_point.reset(std::move(&point));
}

//Setters
void Snake::set_x(int x)
{
    m_snake_point->m_x = x;
}

//Setters
void Snake::set_y(int y)
{
    m_snake_point->m_y = y;
}