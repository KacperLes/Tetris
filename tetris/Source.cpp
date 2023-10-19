#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>

using namespace std;

int sprawdzanie_przesuwania_w_dol(int x, int y, int kierunek, string klocek, double tablica[21][10])
{
    if (klocek == "klocek-I")
    {
        if (kierunek == 0)
        {
            if (tablica[y - 1][x - 2] == 1 || tablica[y - 1][x - 1] == 1 || tablica[y - 1][x] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;

        }
        else if (kierunek == 1)
        {
            if (tablica[y - 3][x] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 2)
        {
            if (tablica[y - 2][x - 2] == 1 || tablica[y - 2][x - 1] == 1 || tablica[y - 2][x] == 1 || tablica[y - 2][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 3)
        {
            if (tablica[y - 3][x - 1] == 1) return y;
            else return y - 1;
        }
    }
    else if (klocek == "klocek-J")
    {
        if (kierunek == 0)
        {
            if (tablica[y - 1][x - 1] == 1 || tablica[y - 1][x - 0] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;

        }
        else if (kierunek == 1)
        {
            if (tablica[y - 2][x] == 1 || tablica[y][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 2)
        {
            if (tablica[y - 1][x - 1] == 1 || tablica[y - 1][x] == 1 || tablica[y - 2][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 3)
        {
            if (tablica[y - 2][x - 1] == 1 || tablica[y - 2][x] == 1) return y;
            else return y - 1;
        }
    }
    else if (klocek == "klocek-L")
    {
        if (kierunek == 0)
        {
            if (tablica[y - 1][x - 1] == 1 || tablica[y - 1][x] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;

        }
        else if (kierunek == 1)
        {
            if (tablica[y - 2][x] == 1 || tablica[y - 2][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 2)
        {
            if (tablica[y - 2][x - 1] == 1 || tablica[y - 1][x] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 3)
        {
            if (tablica[y][x - 1] == 1 || tablica[y - 2][x] == 1) return y;
            else return y - 1;
        }
    }
    else if (klocek == "klocek-O")
    {
        if (tablica[y - 2][x] == 1 || tablica[y - 2][x - 1] == 1) return y;
        else return y - 1;
    }
    else if (klocek == "klocek-S")
    {
        if (kierunek == 0)
        {
            if (tablica[y - 1][x - 1] == 1 || tablica[y - 1][x] == 1 || tablica[y][x + 1] == 1) return y;
            else return y - 1;

        }
        else if (kierunek == 1)
        {
            if (tablica[y - 1][x] == 1 || tablica[y - 2][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 2)
        {
            if (tablica[y - 2][x - 1] == 1 || tablica[y - 2][x] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 3)
        {
            if (tablica[y - 1][x - 1] == 1 || tablica[y - 2][x] == 1) return y;
            else return y - 1;
        }
    }
    else if (klocek == "klocek-T")
    {
        if (kierunek == 0)
        {
            if (tablica[y - 1][x - 1] == 1 || tablica[y - 1][x] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;

        }
        else if (kierunek == 1)
        {
            if (tablica[y - 2][x] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 2)
        {
            if (tablica[y - 1][x - 1] == 1 || tablica[y - 2][x] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 3)
        {
            if (tablica[y - 1][x - 1] == 1 || tablica[y - 2][x] == 1) return y;
            else return y - 1;
        }
    }
    else if (klocek == "klocek-Z")
    {
        if (kierunek == 0)
        {
            if (tablica[y][x - 1] == 1 || tablica[y - 1][x] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;

        }
        else if (kierunek == 1)
        {
            if (tablica[y - 2][x] == 1 || tablica[y - 1][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 2)
        {
            if (tablica[y - 1][x - 1] == 1 || tablica[y - 2][x] == 1 || tablica[y - 2][x + 1] == 1) return y;
            else return y - 1;
        }
        else if (kierunek == 3)
        {
            if (tablica[y - 2][x - 1] == 1 || tablica[y - 1][x] == 1) return y;
            else return y - 1;
        }
    }
}
void znikanie(int x, int y, int kierunek, string klocek, double tablica[21][10])
{
    double* zmienna;
    if (klocek == "klocek-I")
    {
        if (kierunek == 0)
        {
            zmienna = &tablica[y][x - 2];
            *zmienna = 0;
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 1)
        {
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
            zmienna = &tablica[y - 2][x];
            *zmienna = 0;
        }
        if (kierunek == 2)
        {
            zmienna = &tablica[y - 1][x - 2];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 3)
        {
            zmienna = &tablica[y + 1][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y - 2][x - 1];
            *zmienna = 0;
        }
    }
    else if (klocek == "klocek-J")
    {
        if (kierunek == 0)
        {
            zmienna = &tablica[y + 1][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 1)
        {
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y + 1][x + 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
        }
        if (kierunek == 2)
        {
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 3)
        {
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x - 1];
            *zmienna = 0;
        }
    }
    else if (klocek == "klocek-L")
    {
        if (kierunek == 0)
        {
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
            zmienna = &tablica[y + 1][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 1)
        {
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 2)
        {
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 3)
        {
            zmienna = &tablica[y + 1][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
        }
    }
    else if (klocek == "klocek-O")
    {
        zmienna = &tablica[y][x - 1];
        *zmienna = 0;
        zmienna = &tablica[y][x];
        *zmienna = 0;
        zmienna = &tablica[y - 1][x];
        *zmienna = 0;
        zmienna = &tablica[y - 1][x - 1];
        *zmienna = 0;
    }
    else if (klocek == "klocek-S")
    {
        if (kierunek == 0)
        {
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y + 1][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 1)
        {
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 2)
        {
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 3)
        {
            zmienna = &tablica[y + 1][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
        }
    }
    else if (klocek == "klocek-T")
    {
        if (kierunek == 0)
        {
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 1)
        {
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
        }
        if (kierunek == 2)
        {
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 3)
        {
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
        }
    }
    else if (klocek == "klocek-Z")
    {
        if (kierunek == 0)
        {
            zmienna = &tablica[y + 1][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 1)
        {
            zmienna = &tablica[y + 1][x + 1];
            *zmienna = 0;
            zmienna = &tablica[y][x + 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
        }
        if (kierunek == 2)
        {
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x + 1];
            *zmienna = 0;
        }
        if (kierunek == 3)
        {
            zmienna = &tablica[y + 1][x];
            *zmienna = 0;
            zmienna = &tablica[y][x];
            *zmienna = 0;
            zmienna = &tablica[y][x - 1];
            *zmienna = 0;
            zmienna = &tablica[y - 1][x - 1];
            *zmienna = 0;
        }
    }
}
int pojawianie(int x, int y, int kierunek, string klocek, double tablica[21][10])
{
    double* zmienna;
    if (klocek == "klocek-I")
    {
        if (kierunek == 0)
        {
            if (tablica[y][x - 2] == 0 && tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0)
            {
                zmienna = &tablica[y][x - 2];
                *zmienna = 1;
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 1)
        {
            if (tablica[y + 1][x] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0 && tablica[y - 2][x] == 0)
            {
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                zmienna = &tablica[y - 2][x];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 2)
        {
            if (tablica[y - 1][x - 2] == 0 && tablica[y - 1][x - 1] == 0 && tablica[y - 1][x] == 0 && tablica[y - 1][x + 1] == 0)
            {
                zmienna = &tablica[y - 1][x - 2];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 3)
        {
            if (tablica[y + 1][x - 1] == 0 && tablica[y][x - 1] == 0 && tablica[y - 1][x - 1] == 0 && tablica[y - 2][x - 1] == 0)
            {
                zmienna = &tablica[y + 1][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y - 2][x - 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
    }
    else if (klocek == "klocek-J")
    {
        if (kierunek == 0)
        {
            if (tablica[y + 1][x - 1] == 0 && tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0)
            {
                zmienna = &tablica[y + 1][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 1)
        {
            if (tablica[y + 1][x] == 0 && tablica[y + 1][x + 1] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0)
            {
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y + 1][x + 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 2)
        {
            if (tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0 && tablica[y - 1][x + 1] == 0)
            {
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 3)
        {
            if (tablica[y + 1][x] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0 && tablica[y - 1][x - 1] == 0)
            {
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x - 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
    }
    else if (klocek == "klocek-L")
    {
        if (kierunek == 0)
        {
            if (tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0 && tablica[y + 1][x + 1] == 0)
            {
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                zmienna = &tablica[y + 1][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 1)
        {
            if (tablica[y + 1][x] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0 && tablica[y - 1][x + 1] == 0)
            {
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 2)
        {
            if (tablica[y][x - 1] == 0 && tablica[y - 1][x - 1] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0)
            {
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 3)
        {
            if (tablica[y + 1][x - 1] == 0 && tablica[y + 1][x] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0)
            {
                zmienna = &tablica[y + 1][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
    }
    else if (klocek == "klocek-O")
    {
    if (tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0 && tablica[y - 1][x - 1] == 0)
    {
        zmienna = &tablica[y][x - 1];
        *zmienna = 1;
        zmienna = &tablica[y][x];
        *zmienna = 1;
        zmienna = &tablica[y - 1][x];
        *zmienna = 1;
        zmienna = &tablica[y - 1][x - 1];
        *zmienna = 1;
        return 1;
    }
    else return 0;
    }
    else if (klocek == "klocek-S")
    {
        if (kierunek == 0)
        {
            if (tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y + 1][x] == 0 && tablica[y + 1][x + 1] == 0)
            {
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y + 1][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 1)
        {
            if (tablica[y + 1][x] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0 && tablica[y - 1][x + 1] == 0)
            {
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 2)
        {
            if (tablica[y - 1][x] == 0 && tablica[y - 1][x - 1] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0)
            {
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 3)
        {
            if (tablica[y + 1][x - 1] == 0 && tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0)
            {
                zmienna = &tablica[y + 1][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
    }
    else if (klocek == "klocek-T")
    {
        if (kierunek == 0)
        {
            if (tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y + 1][x] == 0 && tablica[y][x + 1] == 0)
            {
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 1)
        {
            if (tablica[y + 1][x] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0 && tablica[y - 1][x] == 0)
            {
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 2)
        {
            if (tablica[y - 1][x] == 0 && tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0)
            {
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 3)
        {
            if (tablica[y + 1][x] == 0 && tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0)
            {
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
    }
    else if (klocek == "klocek-Z")
    {
        if (kierunek == 0)
        {
            if (tablica[y + 1][x - 1] == 0 && tablica[y + 1][x] == 0 && tablica[y][x] == 0 && tablica[y][x + 1] == 0)
            {
                zmienna = &tablica[y + 1][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 1)
        {
            if (tablica[y + 1][x + 1] == 0 && tablica[y][x + 1] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0)
            {
                zmienna = &tablica[y + 1][x + 1];
                *zmienna = 1;
                zmienna = &tablica[y][x + 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 2)
        {
            if (tablica[y][x - 1] == 0 && tablica[y][x] == 0 && tablica[y - 1][x] == 0 && tablica[y - 1][x + 1] == 0)
            {
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x + 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
        if (kierunek == 3)
        {
            if (tablica[y + 1][x] == 0 && tablica[y][x] == 0 && tablica[y][x - 1] == 0 && tablica[y - 1][x - 1] == 0)
            {
                zmienna = &tablica[y + 1][x];
                *zmienna = 1;
                zmienna = &tablica[y][x];
                *zmienna = 1;
                zmienna = &tablica[y][x - 1];
                *zmienna = 1;
                zmienna = &tablica[y - 1][x - 1];
                *zmienna = 1;
                return 1;
            }
            else return 0;
        }
    }
}
int najnizszy_klocek(int y, int kierunek, string klocek)
{
    if (klocek == "klocek-I")
    {
        if (kierunek == 0) return y;
        else if (kierunek == 1) return y - 2;
        else if (kierunek == 2) return y - 1;
        else if (kierunek == 3) return y - 2;
    }
    else if (klocek == "klocek-J")
    {
        if (kierunek == 0) return y;
        else if (kierunek == 1) return y - 1;
        else if (kierunek == 2) return y - 1;
        else if (kierunek == 3) return y - 1;
    }
    else if (klocek == "klocek-L")
    {
        if (kierunek == 0) return y;
        else if (kierunek == 1) return y - 1;
        else if (kierunek == 2) return y - 1;
        else if (kierunek == 3) return y - 1;
    }
    else if (klocek == "klocek-O")
    {
        if (kierunek == 0) return y - 1;
        else if (kierunek == 1) return y - 1;
        else if (kierunek == 2) return y - 1;
        else if (kierunek == 3) return y - 1;
    }
    else if (klocek == "klocek-S")
    {
        if (kierunek == 0) return y;
        else if (kierunek == 1) return y - 1;
        else if (kierunek == 2) return y - 1;
        else if (kierunek == 3) return y - 1;
    }
    else if (klocek == "klocek-T")
    {
        if (kierunek == 0) return y;
        else if (kierunek == 1) return y - 1;
        else if (kierunek == 2) return y - 1;
        else if (kierunek == 3) return y - 1;
    }
    else if (klocek == "klocek-Z")
    {
        if (kierunek == 0) return y;
        else if (kierunek == 1) return y - 1;
        else if (kierunek == 2) return y - 1;
        else if (kierunek == 3) return y - 1;
    }
}
int klocek_najbardziej_do_prawo(int x, int kierunek, string klocek)
{
    if (klocek == "klocek-I")
    {
        if (kierunek == 0) return x + 1;
        else if (kierunek == 1) return x;
        else if (kierunek == 2) return x + 1;
        else if (kierunek == 3) return x - 1;
    }
    else if (klocek == "klocek-J")
    {
        if (kierunek == 0) return x + 1;
        else if (kierunek == 1) return x + 1;
        else if (kierunek == 2) return x + 1;
        else if (kierunek == 3) return x;
    }
    else if (klocek == "klocek-L")
    {
        if (kierunek == 0) return x + 1;
        else if (kierunek == 1) return x + 1;
        else if (kierunek == 2) return x + 1;
        else if (kierunek == 3) return x;
    }
    else if (klocek == "klocek-O")
    {
        if (kierunek == 0) return x;
        else if (kierunek == 1) return x;
        else if (kierunek == 2) return x;
        else if (kierunek == 3) return x;
    }
    else if (klocek == "klocek-S")
    {
        if (kierunek == 0) return x + 1;
        else if (kierunek == 1) return x + 1;
        else if (kierunek == 2) return x + 1;
        else if (kierunek == 3) return x;
    }
    else if (klocek == "klocek-T")
    {
        if (kierunek == 0) return x + 1;
        else if (kierunek == 1) return x + 1;
        else if (kierunek == 2) return x + 1;
        else if (kierunek == 3) return x;
    }
    else if (klocek == "klocek-Z")
    {
        if (kierunek == 0) return x + 1;
        else if (kierunek == 1) return x + 1;
        else if (kierunek == 2) return x + 1;
        else if (kierunek == 3) return x;
    }
}
int klocek_najbardziej_do_lewo(int x, int kierunek, string klocek)
{
    if (klocek == "klocek-I")
    {
        if (kierunek == 0) return x - 2;
        else if (kierunek == 1) return x;
        else if (kierunek == 2) return x - 2;
        else if (kierunek == 3) return x - 1;
    }
    else if (klocek == "klocek-J")
    {
        if (kierunek == 0) return x - 1;
        else if (kierunek == 1) return x;
        else if (kierunek == 2) return x - 1;
        else if (kierunek == 3) return x - 1;
    }
    else if (klocek == "klocek-L")
    {
        if (kierunek == 0) return x - 1;
        else if (kierunek == 1) return x;
        else if (kierunek == 2) return x - 1;
        else if (kierunek == 3) return x - 1;
    }
    else if (klocek == "klocek-O")
    {
        if (kierunek == 0) return x - 1;
        else if (kierunek == 1) return x - 1;
        else if (kierunek == 2) return x - 1;
        else if (kierunek == 3) return x - 1;
    }
    else if (klocek == "klocek-S")
    {
        if (kierunek == 0) return x - 1;
        else if (kierunek == 1) return x;
        else if (kierunek == 2) return x - 1;
        else if (kierunek == 3) return x - 1;
    }
    else if (klocek == "klocek-T")
    {
        if (kierunek == 0) return x - 1;
        else if (kierunek == 1) return x;
        else if (kierunek == 2) return x - 1;
        else if (kierunek == 3) return x - 1;
    }
    else if (klocek == "klocek-Z")
    {
        if (kierunek == 0) return x - 1;
        else if (kierunek == 1) return x;
        else if (kierunek == 2) return x - 1;
        else if (kierunek == 3) return x - 1;
    }
}
string wybieranie_nazwy(int liczba)
{
    if (liczba == 1) return "klocek-I";
    else if (liczba == 2) return "klocek-J";
    else if (liczba == 3) return "klocek-L";
    else if (liczba == 4) return "klocek-O";
    else if (liczba == 5) return "klocek-S";
    else if (liczba == 6) return "klocek-T";
    else if (liczba == 7) return "klocek-Z";
}
int wybieranie_kierunku(int liczba)
{
    if (liczba == 1) return 0;
    else if (liczba == 2) return 2;
    else if (liczba == 3) return 2;
    else if (liczba == 4) return 2;
    else if (liczba == 5) return 2;
    else if (liczba == 6) return 2;
    else if (liczba == 7) return 2;
}
char input_uzytkownika(float limit_czasu)
{
	time_t start = time(NULL);

	while (!_kbhit())
	{
		if ((time(NULL) - start) >= limit_czasu) // porównuje zegar z czasem od pocz¹tku, jeœli wyjdzie poza 1 leci dalej
			return 1;
	}
	return _getch();
}
void wypisywanie(int kierunek, string nazwa, double tablica[21][10], int wynik)
{
    for (int i = 20; i > -2; i--)
    {
        for (int j = -1; j < 11; j++)
        {
            if (i == 20 || i == -1 || j == -1 || j == 10) cout << char(219) << char(219);
            else if (tablica[i][j] == 0) cout << char(177) << char(177) ;
            else cout << char(219) << char(219);
        }
        cout << endl;
    }
    cout << "wynik:" << wynik << endl;
}
int liczenie_wyniku(double tablica[21][10])
{
    int tablica_pom[21] = { 0 }, y_czyszczonej_lini[4] = { -1, -1, -1, -1 }, pom = 0;
    double* zmienna;
    int ile_lini_wyczyszczonych = 0;
    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (tablica[i][j] == 1) pom++;
        }
        if (pom == 10) tablica_pom[i] = 1;
        pom = 0;
    }
    for (int i = 0; i < 21; i++)
    {
        if (tablica_pom[i] == 1)
        {
            ile_lini_wyczyszczonych++;
            if (ile_lini_wyczyszczonych == 1) y_czyszczonej_lini[0] = i;
            if (ile_lini_wyczyszczonych == 2) y_czyszczonej_lini[1] = i;
            if (ile_lini_wyczyszczonych == 3) y_czyszczonej_lini[2] = i;
            if (ile_lini_wyczyszczonych == 4) y_czyszczonej_lini[3] = i;
        }
    }


    if (ile_lini_wyczyszczonych == 1)
    {
        zmienna = &tablica[y_czyszczonej_lini[0] + 1][0];
        for (int y = y_czyszczonej_lini[0]; y < 20; y++)
        {
            for (int x = 0; x < 10; x++)
            {
                tablica[y][x] = *zmienna;
                zmienna++;
            }
        }
    }
    else if (ile_lini_wyczyszczonych == 2)
    {
        for (int z = 0; z < 2; z++)
        {
            zmienna = &tablica[y_czyszczonej_lini[z] + 1][0];
            for (int y = y_czyszczonej_lini[z]-z; y < 19; y++)
            {
                for (int x = 0; x < 10; x++)
                {
                    tablica[y][x] = *zmienna;
                    zmienna++;
                }
            }
        }
    }
    else if (ile_lini_wyczyszczonych == 3) 
    {
        for (int z = 0; z < 3; z++)
        {
            zmienna = &tablica[y_czyszczonej_lini[z] + 1][0];
            for (int y = y_czyszczonej_lini[z] - z; y < 18; y++)
            {
                for (int x = 0; x < 10; x++)
                {
                    tablica[y][x] = *zmienna;
                    zmienna++;
                }
            }
        }
    }
    else if (ile_lini_wyczyszczonych == 4)
    {
        zmienna = &tablica[y_czyszczonej_lini[0] + 4][0];
        for (int y = y_czyszczonej_lini[0]; y < 17; y++)
        {
            for (int x = 0; x < 10; x++)
            {
                tablica[y][x] = *zmienna;
                zmienna++;
            }
        }
    }

    
    if (ile_lini_wyczyszczonych == 0) return 0;
    else if (ile_lini_wyczyszczonych == 1) return 100;
    else if (ile_lini_wyczyszczonych == 2)
    {
        if (y_czyszczonej_lini[1] - y_czyszczonej_lini[0] == 1)
            return 300;
        else return 200;
    }
    else if (ile_lini_wyczyszczonych == 3)
    {
        if (y_czyszczonej_lini[1] - y_czyszczonej_lini[0] == 1 && y_czyszczonej_lini[2] - y_czyszczonej_lini[1])
            return 500;
        else return 400;
    }
    else if (ile_lini_wyczyszczonych == 4) return 800;
}


struct klocek
{
    string nazwa;
    int kierunek;
    int x;
    int y;
} klocek;
int main()
{
    int input = 0, czy_potrzeba_klocka = 1, najnizszy_y_klocka, wynik = 0, rightmost_x, leftmost_x, koniec_gry = 0;
    string plik_nazwa[10];
    int plik_wynik[10];
    double tablica[21][10] = { 0 };
    float czas_opadania = 0.5;

    fstream plik;
    plik.open("wyniki.txt");

    time_t czas = time(NULL);
    srand(time(NULL));
    while (true)
    {
        system("cls");
        cout << "1. Nowa gra" << endl;
        cout << "2. Sterowanie" << endl;
        cout << "3. Poziom trudnosci" << endl;
        cout << "4. Wyswietl najlepsze wyniki" << endl;
        cout << "5. zakoncz gre" << endl;
        input = _getch();
        if (input == int('1'))
        {
            wynik = 0;
            koniec_gry = 0;
            while (koniec_gry != 1)
            {
                if (czy_potrzeba_klocka == 1) //losowanie klocka
                {
                    int pom;
                    int liczba = rand() % 7 + 1;
                    klocek.x = 5;
                    klocek.y = 19;
                    klocek.nazwa = wybieranie_nazwy(liczba);
                    klocek.kierunek = wybieranie_kierunku(liczba);
                    pom = pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                    if (pom == 0) koniec_gry = 1;
                    czy_potrzeba_klocka = 0;
                }
                system("cls"); //czyszczenie cmd
                wypisywanie(klocek.kierunek, klocek.nazwa, tablica, wynik); //wypisywanie tetrisa

                input = input_uzytkownika(czas_opadania); //wykonywanie danych inputow
                if (input == int('a') || input == int('A'))
                {
                    int pom;
                    leftmost_x = klocek_najbardziej_do_lewo(klocek.x - 1, klocek.kierunek, klocek.nazwa);

                    if (leftmost_x >= 0 && klocek.x >= 1)
                    {
                        znikanie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                        klocek.x--;
                        pom = pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                        if (pom == 0)
                        {
                            klocek.x++;
                            pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                        }
                    }
                }
                if (input == int('d') || input == int('D'))
                {
                    int pom;
                    rightmost_x = klocek_najbardziej_do_prawo(klocek.x + 1, klocek.kierunek, klocek.nazwa);

                    if ((rightmost_x <= 9 && klocek.x <= 8) || (rightmost_x <= 9 && klocek.nazwa == "klocek-I" && klocek.kierunek == 3 && klocek.x <= 10))
                    {
                        znikanie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                        klocek.x++;
                        pom = pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                        if (pom == 0)
                        {
                            klocek.x--;
                            pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                        }
                    }
                }
                if (input == int('s') || input == int('S'))
                {
                    int pom_y = klocek.y, pom;
                    klocek.y = sprawdzanie_przesuwania_w_dol(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                    najnizszy_y_klocka = najnizszy_klocek(klocek.y, klocek.kierunek, klocek.nazwa);
                    if (najnizszy_y_klocka >= 0 && klocek.y != pom_y)
                    {
                        znikanie(klocek.x, pom_y, klocek.kierunek, klocek.nazwa, tablica);
                        pom = pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                        if (pom == 0) koniec_gry = 1;
                    }
                    else
                    {
                        czy_potrzeba_klocka = 1;
                        wynik += liczenie_wyniku(tablica);
                    }
                }
                if (input == int('w') || input == int('W'))
                {
                    int pom, leftmost_x, rightmost_x;
                    znikanie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                    if (klocek.kierunek != 3) klocek.kierunek++;
                    else klocek.kierunek = 0;

                    leftmost_x = klocek_najbardziej_do_lewo(klocek.x, klocek.kierunek, klocek.nazwa);
                    rightmost_x = klocek_najbardziej_do_prawo(klocek.x, klocek.kierunek, klocek.nazwa);

                    while (leftmost_x < 0)
                    {
                        klocek.x++;
                        leftmost_x = klocek_najbardziej_do_lewo(klocek.x, klocek.kierunek, klocek.nazwa);
                    }
                    while (rightmost_x > 9)
                    {
                        klocek.x--;
                        rightmost_x = klocek_najbardziej_do_prawo(klocek.x, klocek.kierunek, klocek.nazwa);
                    }

                    pom = pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                    if (pom == 0)
                    {
                        if (klocek.kierunek == 0) klocek.kierunek = 3;
                        else klocek.kierunek--;
                        pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                    }

                }
                if (input == int(' '))
                {
                    int pom_y_poczatkowa = klocek.y, pom_y = klocek.y;

                    klocek.y = sprawdzanie_przesuwania_w_dol(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                    najnizszy_y_klocka = najnizszy_klocek(klocek.y, klocek.kierunek, klocek.nazwa);
                    while (klocek.y != pom_y && najnizszy_y_klocka > 0)
                    {
                        pom_y = klocek.y;
                        klocek.y = sprawdzanie_przesuwania_w_dol(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                        najnizszy_y_klocka = najnizszy_klocek(klocek.y, klocek.kierunek, klocek.nazwa);
                    }
                    znikanie(klocek.x, pom_y_poczatkowa, klocek.kierunek, klocek.nazwa, tablica);
                    pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                    czy_potrzeba_klocka = 1;
                    wynik += liczenie_wyniku(tablica);
                }

                time_t start = time(NULL); //spadanie
                if ((time(NULL) - czas) >= czas_opadania)
                {
                    int pom_y = klocek.y, pom;
                    klocek.y = sprawdzanie_przesuwania_w_dol(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                    najnizszy_y_klocka = najnizszy_klocek(klocek.y, klocek.kierunek, klocek.nazwa);
                    if (najnizszy_y_klocka >= 0 && klocek.y != pom_y)
                    {
                        znikanie(klocek.x, pom_y, klocek.kierunek, klocek.nazwa, tablica);
                        pom = pojawianie(klocek.x, klocek.y, klocek.kierunek, klocek.nazwa, tablica);
                        if (pom == 0) koniec_gry = 1;
                    }
                    else
                    {
                        czy_potrzeba_klocka = 1;
                        wynik += liczenie_wyniku(tablica);
                    }
                    czas = time(NULL);
                }

            }

            system("cls");
            cout << "Przegrales" << endl;
            cout << "Twoj wynik:" << wynik << endl;
            for (int i = 0; i < 10; i++)
            {
                plik >> plik_nazwa[i] >> plik_wynik[i];
            }
            if (wynik>plik_wynik[9])
            {
                string pom_imie;
                cout << "Podaj swoje imie: " << endl;
                cin >> pom_imie;
                int i = 9;
                while (wynik > plik_wynik[i - 1] && i > 0)
                {
                    i--;
                }
                for (int j = 9; j > i; j--)
                {
                    plik_nazwa[j] = plik_nazwa[j - 1];
                    plik_wynik[j] = plik_wynik[j - 1];

                }
                plik_nazwa[i] = pom_imie;
                plik_wynik[i] = wynik;

                plik.close();
                ofstream plik("wyniki.txt");
                for (int i = 0; i < 10; i++)
                {
                    plik << plik_nazwa[i] << " " << plik_wynik[i] << endl;
                }
            }
            
            for (int y = 0; y < 20; y++)
                for (int x = 0; x < 10; x++)
                    tablica[y][x] = 0;
        }
        if (input == int('2'))
        {
            system("cls");
            cout << "d - przesuwanie w prawo" << endl;
            cout << "a - przesuwanie w lewo" << endl;
            cout << "w - obracanie" << endl;
            cout << "s - spadanie o jeden klocek" << endl;
            cout << "spacja - spadanie na sam dol" << endl;
            cout << endl << "1. powrot" << endl;
            input = _getch();
            if (input == int('1')) exit;
        }
        if (input == int('3'))
        {
            system("cls");
            cout << "Wybierz Poziom Trudnoœci:" << endl;
            cout << "1. Latwy" << endl;
            cout << "2. Normalny" << endl;
            cout << "3. Trudny" << endl;
            cout << "4. Bardzo Trudny" << endl;
            cout << endl << "5. Powrot do menu glownego";
            input = _getch();
            if (input == int('1'))
            {
                input = int('0');
                czas_opadania = 0.7;
                exit;
            }
            if (input == int('2'))
            {
                input = int('0');
                czas_opadania = 0.5;
                exit;
            }
            if (input == int('3')) 
            {
                input = int('0');
                czas_opadania = 0.4;
                exit;
            }
            if (input == int('4'))
            {
                input = int('0');
                czas_opadania = 0.35;
                exit;
            }
            if (input == int('5')) exit;
            {
                input = int('0');
                exit;
            }
        }
        if (input == int('4'))
        {
            system("cls");
            for (int i = 0; i < 10; i++)
            {
                plik >> plik_nazwa[i] >> plik_wynik[i];
                cout << i + 1<<". " << plik_nazwa[i] << " " << plik_wynik[i] << endl;
            }

            cout << endl << "1. powrot" << endl;
            input = _getch();
            if (input == int('1')) exit;
        }
        if (input == int('5')) return 0;
    }
    

    plik.close();
    return 0;
}



