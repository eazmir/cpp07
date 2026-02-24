#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_VAL 10

template <typename T>
class Array
{
    private:
        T *_data;
        size_t _size;
    public:
        Array();
        ~Array(); 
        Array(Array const &other);
        Array<T> &operator=(Array const &other);
        ////////////////////////////////
        size_t size()const;
        Array(unsigned int size);
        T &operator[](size_t index);
        const T &operator[](size_t index)const;
};
#include "../template/Array.tpp"
