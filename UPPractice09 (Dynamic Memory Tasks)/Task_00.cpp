#include <iostream>
 
// Динамично заделете памет за променлива от тип int, присвоете стойност и освободете паметта.

int main()
{
    int* number = new int(25);

    std::cout << *number;

    delete number;
}