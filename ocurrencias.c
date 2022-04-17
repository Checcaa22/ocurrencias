#include "ocurrencias.h"
#include <stdio.h>

void eliminarOcurrencias(Ocurrencias* vector, int numElim)
{
    Ocurrencias vecSinOcu ={{}, vector->cantElem} ;

    int *cursorVec = vector -> vec,
    *finalV = (vector -> vec) + (vector->cantElem) - 1,
    *cursorVSO = &vecSinOcu.vec[0], i;

    while(cursorVec <= finalV)
        {
            if(*cursorVec != numElim)
            {
            *cursorVSO = *cursorVec;
            cursorVSO++;
            }

            cursorVec++;
        }

    for(i=0; i < vector->cantElem; i++)
        {
            printf("%d \n", vecSinOcu.vec[i]);
        }
}
