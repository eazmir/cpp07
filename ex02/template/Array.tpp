template <typename T>
Array<T>::Array():_data(NULL),_size(0)
{}

template <typename T>
Array<T>::Array(Array<T> const &other)
{
    _size = other._size;
    _data = new T[_size];
    for (size_t i = 0; i < _size;i++)
    {
        _data[i] = other._data[i];
    }
}

template <typename T>
Array<T>::~Array()
{
    delete [] _data;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
    if (this != &other)
    {
        delete [] _data;
        
        _size = other._size;
        _data = new T[_size];
        
        for (unsigned int i = 0; i < _size;i++)
        {
            _data[i] = other._data[i];
        }
    }
    return (*this);
}

//////////////////////////////////////////////////////////////
template <typename T>
Array<T>::Array(unsigned int size):_size(size)
{
    _data = new T[_size];
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("index out of bounds");
    return (_data[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
     if (index >= _size)
        throw std::out_of_range("index out of bounds");
    return (_data[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}

template <typename T>
std::ostream &operator<<(std::ostream &os,Array<T> const data)
{
    for (unsigned int i = 0; i < data.size();i++)
        os <<"  "<<data[i] <<std::endl;
    return (os);
 }