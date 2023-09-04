#include <stdio.h>
#include <TXLib.h>

#include "main.h"
#include "error.h"

int main ()
{
    printf ("Ёто программа позвол€юща€ запоминать исходы матчей.\n");

    int matrix_score[15] = {};

    for (int i = 0; i < 15; i++)
    {
        input_score ((int *) matrix_score);
    }

    Print_trianglematrix ((int *) matrix_score, 5);

    return 0;
}
