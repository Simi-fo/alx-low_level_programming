#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isupper(int c)
{
     return isupper('A' <= c && 'Z' >= c);
}
