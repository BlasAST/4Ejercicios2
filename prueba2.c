#include <stdio.h>
#include <unistd.h>

void put_char(char n)
{
    write(1, &n, 1);
}

void print_numbers(char matriz[4][4])
{
    int x = 0;
    int y = 0;
    while (x < 4)
    {
        while (y < 4)
        {
            char a = matriz[x][y];
            put_char(a);
            y++;
        }
        put_char('\n');
        y = 0;
        x++;
    }
}

int count_visible(char xy[4])
{
    int max = 0;
    int count = 0;
    int i = 0;
    while (i < 4)
    {
        if (xy[i] > max)
        {
            max = xy[i];
            count++;
        }
        i++;
    }
    return count;
}

int is_valid_number(char matriz[4][4], int f, int c, int n)
{
    int i = 0;
    while (i < 4)
    {
        if (matriz[f][i] == n || matriz[i][c] == n)
            return 0;
        i++;
    }
    return 1;
}

int is_valid(char matriz[4][4], char *restricciones)
{
    int i = 0;
    while (i < 4)
    {
        char x1[4] = {matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3]};
        char x2[4] = {matriz[i][3], matriz[i][2], matriz[i][1], matriz[i][0]};
        char y1[4] = {matriz[0][i], matriz[1][i], matriz[2][i], matriz[3][i]};
        char y2[4] = {matriz[3][i], matriz[2][i], matriz[1][i], matriz[0][i]};

        if (count_visible(x1) != restricciones[i] ||
            count_visible(x2) != restricciones[i + 4] ||
            count_visible(y1) != restricciones[i + 8] ||
            count_visible(y2) != restricciones[i + 12])
            return 0;
        i++;
    }
    return 1;
}

int order_numbers(char matriz[4][4], char *res, int f, int c)
{
    int num;
    int sf;
    int sc;

    num = 1;
    if (c == 3)
    {
        sf = f + 1;
        sc = 0;
    }
    else
    {
        sf = f;
        sc = c + 1;
    }
    while (num <= 4)
    {
        if (is_valid_number(matriz, f, c, num))
        {
            matriz[f][c] = num;
            if (is_valid(matriz, res))
            {
                if (sf == 4)
                    return 1;
                else if (order_numbers(matriz, res, sf, sc))
                    return 1;
            }
            matriz[f][c] = 0;
        }
        num++;
    }
    return 0;
}

int main(int args, char **argv)
{
    char matriz[4][4] = {{0}};  // Inicializamos la matriz con ceros
    char restricciones[16];
    int i = 0;
    int h = 0;

    // Procesar las restricciones desde argv[1]
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] != ' ')
        {
            restricciones[h] = argv[1][i] - '0';  // Convertimos el caracter a número
            h++;
        }
        i++;
    }

    // Resolver el puzzle
    order_numbers(matriz, restricciones, 0, 0);
    print_numbers(matriz);  // Imprimir la solución si es válida

    return 0;
}

