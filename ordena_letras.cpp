
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
    int i,j;
    //implemento el metodo de seleccion
    for(int i=0; i<strlen(v); i++)
    {
        for (int j=0; j<strlen(v);j++)
        {
            //implementacion del metodo
             if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
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
