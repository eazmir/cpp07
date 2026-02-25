#include <iostream>
#include <cstdlib>

template <typename T ,typename F>

void iter(T *array,const unsigned int size,F func)
{
    for (unsigned int i = 0; i < size;i++)
    {
        func(array[i]);
    }
}

// template <typename T ,typename Tf>

// void iter(T *array,const unsigned int size,Tf (fnc)(T&))
// {
//     for (unsigned int i = 0; i < size;i++)
//     {
//         fnc(array[i]);
//     }
// }