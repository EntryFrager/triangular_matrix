#include <stdio.h>
#include <TXLib.h>

#include "main.h"
#include "error.h"

void input_score (int *matrix_score)
{
    my_assert (matrix_score != NULL);

    printf ("Введи номера команд и результат матча: ");

    int x = 0;
    int y = 0;
    int score = 0;

    while (scanf ("%d %d %d", &x, &y, &score) != 3 && (x != y))
    {
        clean_buffer ();

        printf ("Ты ввел неверные значения, давай заново...\n");
    }

    if (x < y)
    {
        *(matrix_score + y * (y - 1) / 2 - (y - 1) + x - 1) = score;
    }
    else
    {
        *(matrix_score + x * (x - 1) / 2 - (x - 1) + y - 1) = score;
    }
}

void Print_trianglematrix (const int *matrix, size_t Size)
{
    my_assert (matrix != NULL);

    for (size_t y = 0; y < Size; y++)
    {
        for (size_t x = 0; x <= y; x++)
        {
            printf ("%d ", *(matrix + x + (y + 1) * y / 2));
        }
        printf("\n");
    }
}

void clean_buffer ()
{
    int ch = 0;

    while ((ch = getchar () != '\n') && (ch != EOF)) {}
}
