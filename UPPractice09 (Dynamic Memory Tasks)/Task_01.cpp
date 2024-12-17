#include <iostream>

// В една школа има определен брой учители. Всеки един от тях иска да нанесе определен брой оценки. Дайте на учителите места, където да си нанесат оценките.

void enterMatrixValues(double **matrix, unsigned short rows, unsigned short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(double **matrix, unsigned short rows, unsigned short cols)
{
    for (int i = 0; i < rows; i++)
    {
        std::cout << i + 1 << " Teacher: ";

        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j] << ' ';
        }
        
        std::cout << '\n';
    } 
}

void freeMatrixMemory(double **matrix, unsigned short rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    
    delete matrix;
}

int main()
{
    unsigned short teachers, grades;
    std::cin >> teachers >> grades;

    double** matrix = new double*[teachers];

    for (int i = 0; i < teachers; i++)
    {
        matrix[i] = new double[grades];
    }

    enterMatrixValues(matrix, teachers, grades);

    printMatrix(matrix, teachers, grades); 
    
    freeMatrixMemory(matrix, teachers); 
}