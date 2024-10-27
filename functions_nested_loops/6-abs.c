#include <stdio.h>
#include "main.h"
/**
 * _abs - Fonction pour calculer la valeur absolue d'un entier
 *
 * @n: L'entier dont on veut calculer la valeur absolue
 *
 * Return: La valeur absolue de n
 */


int _abs(int n)
{
if (n < 0)
{
return (-n);
}
return (n);
}
