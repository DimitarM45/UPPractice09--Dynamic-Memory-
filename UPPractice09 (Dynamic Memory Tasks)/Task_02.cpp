#include <iostream>

// Напишете функция, която приема масив и нов размер на масива. Функцията да променя размера на новия масив като запазва данните, вече записани в масива.

int* resizeArray(int *arr, unsigned short arrSize, unsigned short newArrSize)
{
    if (!newArrSize)
    {
        return nullptr;
    }

    unsigned short minSize = arrSize < newArrSize ? arrSize : newArrSize;

    int *newArr = new int[newArrSize] {};

    for (int i = 0; i < minSize; i++)
    {
        newArr[i] = arr[i];
    }
    
    return newArr;
}

int main()
{
    const unsigned short arrSize = 5;

    int arr[arrSize] = {1, 2, 3, 4, 5};

    unsigned short newArrSize;
    
    std::cin >> newArrSize;

    int* newArr = resizeArray(arr, arrSize, newArrSize);
    
    if (!newArr)
    {
        return;
    }
    
    for (int i = 0; i < newArrSize; i++)
    {
        std::cout << newArr[i] << ' ';
    }

    delete[] newArr;
}