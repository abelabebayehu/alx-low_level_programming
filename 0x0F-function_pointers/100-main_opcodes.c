#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - Disassembles a buffer of bytes using the udis86 library.
  * @argc: The number of command-line arguments
  * @argv: An array of command-line arguments
  *
  * Return: 0 on success, 2 on error
  */

int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int val = 0, i = 0;

	if (argc == 2)
	{
		val = atoi(argv[1]);

		if (val < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], val);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - Disassembles a buffer of bytes using the udis86 library.
  * @argc: The number of command-line arguments
  * @argv: An array of command-line arguments
  *
  * Return: 0 on success, 2 on error
  */

int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int val = 0, i = 0;

	if (argc == 2)
	{
		val = atoi(argv[1]);

		if (val < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], val);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}
>>>>>>> 2ac452b634d7869476bd9c52e1185800fb65722a
