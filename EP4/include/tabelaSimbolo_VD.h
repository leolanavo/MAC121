#ifndef TABELASIMBOLO_VD_H
#define TABELASIMBOLO_VD_H

#include <stdlib.h>
#include <string.h>
#include "../include/stableVec.h"
#include "../include/auxFunctions.h"
#include "../include/readWord.h"
#include "../include/types.h"

/* Receives a file pointer and a string. It reads the
 * text from the file and prints its words with the
 * corresponding frequencies according to the given
 * print mode. Uses a disorderly vector as symbol table.*/
void desorderVec(FILE* file, char* mode);

#endif
