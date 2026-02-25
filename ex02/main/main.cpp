#include "../include/Array.hpp"

void print_section(const std::string& title)
{
    std::cout << "\n===== " << title << " =====\n" << std::endl;
}

int main()
{
    std::srand(std::time(NULL));

    print_section("Fill and Test Deep Copy");

    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];

    for (size_t i = 0; i < MAX_VAL; ++i)
    {
        int value = std::rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    // Test copy constructor
    {
        Array<int> tmp(numbers);
        Array<int> test(tmp);
    }

    // Verify values after destruction of tmp/test
    for (size_t i = 0; i < MAX_VAL; ++i)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    std::cout << "Copy constructor test passed ✅" << std::endl;

    // Test copy assignment
    print_section("Copy Assignment Test");

    Array<int> assigned(MAX_VAL);
    assigned = numbers;

    for (size_t i = 0; i < MAX_VAL; ++i)
    {
        if (assigned[i] != numbers[i])
        {
            std::cerr << "Assignment failed!!" << std::endl;
            return 1;
        }
    }

    std::cout << "Copy assignment test passed ✅" << std::endl;

    // Bounds checking
    print_section("Bounds Checking Test");

    try
    {
        numbers[-2] = 0;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Small print test
    print_section("Small Array Print Test");

    {
        size_t size = 10;
        Array<int> arr(size);

        for (size_t i = 0; i < size; ++i)
            arr[i] = i;

        std::cout << "{\n" << arr << "}\n";
    }
    delete [] mirror;
    print_section("All Tests Completed Successfully");
    return 0;
}