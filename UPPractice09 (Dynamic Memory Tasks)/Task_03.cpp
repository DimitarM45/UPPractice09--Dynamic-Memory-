#include <iostream>

// Да се реализира функция, която приема число, която конвертира в символен низ и връща указател към първия елемент на масива.

unsigned short countDigits(int number)
{
    unsigned short digits = 0;

    while (number)
    {
        digits++;

        number /= 10;        
    }

    return digits;
}

void reverseArray(char *array, unsigned short arraySize)
{
    for (int i = 0; i < arraySize / 2; i++)
    {
        if ((arraySize - i - 1) >= 0)
        {
            int temp = array[i];
            array[i] = array[arraySize - i - 1];
            array[arraySize - i - 1] = temp;
        } 
    }
}

char * parseNumber(int number)
{
    int digits = countDigits(number); 

    char *str = new char[digits];

    int tempNumber = number;

    unsigned short index = 0;

    while (tempNumber)
    {
        unsigned short currDigit = tempNumber % 10;

        str[index++] = currDigit + '0'; 

        tempNumber /= 10;
    }

    reverseArray(str, digits);
    
    return str;
}

int main()
{
    int number;
    std::cin >> number;

    char *numberStr = parseNumber(number);

    std::cout << numberStr;

    delete[] numberStr;
}