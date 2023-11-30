#ifndef MAIN_H
#define MAIN_H

// Concept for 64bit system
template <typename T>
concept dereferencable_x64 = requires (T t)
{
    *t;
    sizeof(T) == 8;
    requires sizeof(T) == 8;
};

// Concept for 32bit system
template <typename T>
concept dereferencable_x32 = requires (T t)
{
    *t;
    sizeof(T) == 4;
    requires sizeof(T) == 4;
};

// Swap pointers
template <typename T>
requires dereferencable_x64<T>
void swap(T a, T b)
{
    std::swap(a,b);
}

#endif