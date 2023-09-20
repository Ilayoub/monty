#include "monty.h"


int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int no_int_error(unsigned int line_number);
int unknown_op_error(char *opcode, unsigned int line_number);


/**
 * usage_error - The function prints usage error messages
 * Return: (EXIT_FAILURE) always
 */

int usage_error(void)
{
    fprintf(stderr, "USAGE: monty file\n");
    return (EXIT_FAILURE);
}


/**
 * malloc_error - The function prints malloc error messages
 * Return: (EXIT_FAILURE) always
 */
int malloc_error(void)
{
    fprintf(stderr, "Error: malloc failed\n");
    return (EXIT_FAILURE);
}

/**
 * f_open_error - The function prints file opening error 
 * messages w/ file name
 * @filename: The name of file failed to be opened
 * Return: (EXIT_FAILURE) always
 */

int f_open_error(char *filename)
{
    fprintf(stderr, "Error: Can't open file %s\n", filename);
    return (EXIT_FAILURE);
}


/**
 * unknown_op_error - The function prints unknown instruction error messages
 * @opcode: The Opcode where error occurred
 * @line_number: The line number in Monty bytecodes file where error occured
 * Return: (EXIT_FAILURE) always
 */

int unknown_op_error(char *opcode, unsigned int line_number)
{
    fprintf(stderr, "L%u: unknown instruction %s\n",
        line_number, opcode);
    return (EXIT_FAILURE);
}


/**
 * no_int_error - The function prints invalid monty_push
 * argument error messages
 * @line_number: The line number in Monty bytecodes file where error occured
 * Return: (EXIT_FAILURE) always.
 */

int no_int_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: usage: push integer\n", line_number);
    return (EXIT_FAILURE);
}
