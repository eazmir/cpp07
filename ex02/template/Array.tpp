template <typename T>
Array<T>::Array():_data(NULL),_size(0)
{}

template <typename T>
Array<T>::Array(Array<T> const &other)
{
    for (int i = 0; i < _size;i++)
    {
        _data[i] = other._data[i];
    }
}

template <typename T>
Array<T>::~Array()
{
    if (_data)
        delete [] _data;
}

template <typename T>
T &Array<T>::operator=(Array<T> const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < _size;i++)
        {
            _data[i] = other._data[i];
        }
    }
    return (this);
}

//////////////////////////////////////////////////////////////
template <typename T>
Array<T>::Array(unsigned int size):_size(size)
{
    _data = new T[_size];
}

template <typename T>
T &Array<T>::operator[](int index)
{
    if (index < 0 || index >= _size)
        throw std::out_of_range("index out of bound");
    return (_data[index]);
}

template <typename T>
T &Array<T>::operator[](int index) const
{
     if (index < 0 || index >= _size)
        throw std::out_of_range("index out of bound");
    return (_data[index]);
}

template <typename T>
int Array<T>::size() const
{
    return (_size);
}

template <typename T>
std::ostream &operator<<(std::ostream &os,Array<T> const data)
{
    for (int i = 0; i < data.size();i++)
        os << data[i] <<std::endl;
    return (os);
 }