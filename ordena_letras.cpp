
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
using namespace std;

void llenaletras(char p[])
{
    int lc, i;
    srand(time(NULL));
    lc = 1 + rand() % 20;
    for (i = 0; i < lc; i++)
    {
        p[i] = 97 + rand() % 26;
    }
    p[i] = '\0';

    // a-z 97-122 o A-Z 65 - 90
}


void ordenaletras(char p[])
{
    char aux;
    int i, j;
    for (i = 0; i < strlen(p) - 1; i++)
    {
        for (j = i + 1; j < strlen(p); j++)
        {
            if (p[i] > p[j])
            {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
}

void buscar_letras(char v[])
{

}


main()
{
    char letras[100];

    llenaletras(letras); //envio con mi array
    cout << letras << "\n";

    ordenaletras(letras);
    cout << letras;

    buscar_letras(letras);
}