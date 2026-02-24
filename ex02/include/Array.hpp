#include <iostream>

template <typename T>

class Array
{
    private:
        T *_data;
        int _size;
    public:
        Array();
        ~Array(); 
        Array(Array const &other);
        T &operator=(Array const &other);
        ////////////////////////////////
        int size()const;
        Array(unsigned int size);
        T &operator[](int index);
        T &operator[](int index)const;
};
#include "../template/Array.tpp"
