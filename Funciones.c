#include "Funciones.h"

int CrearPalabra(tString *string, const char *palabra)
{
    string->len = strlen(palabra);
    string->palabra = malloc((string->len+1)*sizeof(char)); /* LEN + \0 */
    if(!string->palabra)
        {
            string->len = 0;
            return -1;
        }

    strcpy(string->palabra, palabra);
    return 1;
}
void DestruirPalabra(tString *string)
{
    free(string->palabra);
    string->palabra = NULL;
    string->len = 0;
}
int StringCmp(tString *string, const char *cmp)
{
    return strcmp(string->palabra, cmp);
}
int StringContCat(tString *string, const char *ConCat)
{
    int NewLong = strlen(string->palabra) + strlen(ConCat) + 1;
    char *aux = realloc(string->palabra, NewLong*sizeof(char));
    if(!aux)
    {
        return -1;
    }

    string->palabra = aux;
    strcat(string->palabra, ConCat);
    string->len = NewLong - 1;
    return 1;

}
void PasarAMayus(tString *string)
{
    char *aux = string->palabra;
    while(*aux != '\0')
    {
        if(*aux >= 97 && *aux <= 122)
            *aux -= 32;
        aux++;
    }

}
void mostrarString(tString *string)
{
    printf("%s", string->palabra);
}
int largoString(tString *string)
{
    return string->len;
}
