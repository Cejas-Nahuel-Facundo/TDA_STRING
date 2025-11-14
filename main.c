#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    tString vec;
    CrearPalabra(&vec, "Hola Mundo");
    int n = largoString(&vec);
    printf("%d\n", n);
    mostrarString(&vec);
    StringContCat(&vec, ",Nahuel");
    printf("\n");
    n = largoString(&vec);
    printf("%d\n", n);
    mostrarString(&vec);
    printf("\n");
    PasarAMayus(&vec);
    mostrarString(&vec);
    DestruirPalabra(&vec);
    return 0;
}
