#include "monty.h"

/**
 * getfunction -	calls correct function according to opcode
 * @opcode:		string containing the opcode.
 * @line_number:	line number of code being operated.
 * Return:		nothing.
 */
void getfunction(char *opcode, int line_number)
{
	instruction_t codes[] = {
		{"push", _push}
        	{"pall", _pall}
        	{NULL, NULL}
	}

	return;
}

