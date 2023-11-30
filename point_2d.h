#ifndef POINT_2D_H
#define POINT_2D_H
#include <iostream>

class Snake;

class Point_2D
{
    int m_x{};
    int m_y{};

    public:
        explicit Point_2D();
        ~Point_2D();
        explicit Point_2D(int x, int y);
        Point_2D(int x); // converting constructor
        Point_2D(Point_2D& point); // copy constructor
        Point_2D(Point_2D&& point); // move constructor

        friend class Snake;

        //getters
        int get_x() const;
        int get_y() const;

        //setters
        void set_x(int x);
        void set_y(int y);
};

#endif