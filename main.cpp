#include <stdio.h>
#include <TXLib.h>

#include "input_output.h"
#include "error.h"

int main ()
{
    printf ("Ёто программа позвол€юща€ запоминать исходы матчей.\n");

    int nTeams = 0;

    scanf ("%d", &nTeams);

    int *matrix_score = (int *) calloc (nTeams * (nTeams - 1) / 2 * sizeof(int), 4 * sizeof(int));

    for (int i = 0; i < nTeams * (nTeams - 1) / 2; i++)
    {
        input_score (matrix_score);
    }

    print_triangle_matrix (matrix_score, nTeams - 1);

    return 0;
}
