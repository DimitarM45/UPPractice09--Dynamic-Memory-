#include <iostream>

// Напишете функция, която приема масив и връща друг масив, който е копие на подадения.

int * copyArray(int * array, unsigned short arraySize)
{
    if (!arraySize)
    {
        return nullptr;
    }

    int *arrCopy = new int[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        arrCopy[i] = array[i];
    }
    
    return arrCopy;
}

int main()
{
    const unsigned short size = 5;

    int array[size] = {1, 2, 3, 4, 5};

    int *copy = copyArray(array, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << copy[i];
    }
    
    delete[] copy;
}