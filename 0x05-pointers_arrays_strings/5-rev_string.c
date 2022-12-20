#include"main.h"
/**
* rev_string - funcctions that reverses a string
* @s: the string
*/

void rev_string(char *s)
{
int r;
int c = 0;
int j;
char l;

while (s[c] != '\0')
{
c++;
}

j = c - 1;

for (r = 0; r < c / 2; r++)
{
l = s[r];
s[r] = s[j];
s[j] = l;
j--;
}
}
