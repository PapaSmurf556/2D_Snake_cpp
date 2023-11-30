#ifndef SNAKE_H
#define SNAKE_H
#include <memory>
//#include "point_2d.h"
#include <iostream>

class Point_2D; // Forward Declaration


class Snake
{
    public:
        explicit Snake();
        explicit Snake(int x, int y);
        ~Snake();
        explicit Snake(Point_2D& point);
        Snake(Snake& snake);
        Snake(Snake&& snake);
    

        //Getters
        const Point_2D& get_Point_2D() const;
        int get_x() const;
        int get_y() const;

        //Setters
        void set_Point_2D(Point_2D& point);
        void set_x(int x);
        void set_y(int y);

        static const unsigned int& get_snake_body_count()
        {
            return m_snake_body_count;
        }
    private:
        std::unique_ptr<Point_2D> m_snake_point{nullptr};
        static inline unsigned int m_snake_body_count{};
};

#endif