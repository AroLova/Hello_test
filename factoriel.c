#include <stdio.h>
#include <stdlib.h>

int factoriel(int n)
{
    return n=0 ? 1 : n*factoriel(n-1);
}