#include "monty.h"

/**
* error_math - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_math(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: division by zero\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_put_char_empty - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_put_char_empty(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't put_char, stack empty\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_not_char - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_not_char(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't put_char, value out of range\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_memory - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_memory(stack_t **stack, unsigned int line_num)
{
	(void)line_num;

	fprintf(stderr, "Error: malloc failed\n");
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}
