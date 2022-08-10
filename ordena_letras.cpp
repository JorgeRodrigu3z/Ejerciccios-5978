
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
using namespace std;

void llenaletras(char v[])
{
    int lc, i,num,jx;
    char aux[10];

    srand(time(NULL));
    lc = 1 + rand() % 10;

    for  (int j = 0; j < 10; j++)
    {
        aux[j]=97 + rand() % 26;
    }
        

    for ( i = 0, jx = 0; i < lc ; i++)
    {
        if (v[i]=!aux[jx])
        {
            v[i]=aux[jx];
        }
        else
        {
            jx++;
        }
    }
    
    v[i] = '\0';

    
}


void ordenaletras(char p[])
{
    char aux;
    int i , j ;
    int o;

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
    int i;
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