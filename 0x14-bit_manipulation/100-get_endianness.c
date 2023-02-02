#include<stdint.h>
#include"main.h"
/**
* get_endianness - function that checks the endianness
* Union: union test
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	union
	{
		uint32_t i;
		char c[4];
	}
	endian_test = {0x01020304};
	return (endian_test.c[0] == 1 ? 0 : 1);
}
