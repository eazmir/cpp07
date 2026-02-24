#include "../include/Array.hpp"

int main(void)
{
    try
    {
        /* code */
         Array<int> numbers(10);
        for (int i = 0; i < 10;i++)
            numbers[i] = i;
        std::cout<<numbers;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}