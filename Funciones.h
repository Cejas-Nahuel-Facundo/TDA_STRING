#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char *palabra;
    int len;

}tString;

int CrearPalabra(tString *string, const char *palabra);
void DestruirPalabra(tString *string);
int StringCmp(tString *string, const char *cmp);
int StringContCat(tString *string, const char *ConCat);
void PasarAMayus(tString *string);
void mostrarString(tString *string);
int largoString(tString *string);
