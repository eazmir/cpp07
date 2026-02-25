#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_VAL 10

template <typename T>
class Array
{
    private:
        T *_data;
        unsigned int _size;
    public:
        Array();
        ~Array(); 
        Array(Array const &other);
        Array<T> &operator=(Array const &other);
        ////////////////////////////////
        unsigned int size()const;
        Array(unsigned int size);
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index)const;
};
#include "../template/Array.tpp"