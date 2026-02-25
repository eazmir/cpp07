#include "../include/iter.hpp"

int power_of_2(int &x)
{
    x = x * 2;
    return (x);
}

void print(int &rray)
{
    std::cout<<rray<<std::endl;
}

int main(void)
{
    int tabls[10] = {1,2,3,4,5,6,7,8,9,10};

    int size = 10;
    int *arr = new int[size];
    
    arr = tabls;
    for (int value = 0; value < size;value++)
    {
        arr[value] = value;
    }
    iter(arr,size,power_of_2);
    iter(arr,size,print);
}