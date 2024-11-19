#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/numbers.h"

#define STRTOL_BASE 10

//Main program
int main(int argc, char *argv[]) 
{
	//Variables
	int min, max, uniqc;
	int validated = 1;

	//If no arguments/not enough arguments ask for arguments and validate them!
	if (argc < 4)
	{
		while (ask_arguments(&min, &max, &uniqc) != 0) 
		{
			printf("Invalid input or range detected.. Please try again with valid integers and range..\n");
		}	
	}

	//If arguments were given correctly then validate them and generate numbers
	else
	{
		for (int i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i])) 
			{
				validated = 0;
			}
		}

		if (validated == 1) 
		{
			min = atoi(argv[1]);
			max = atoi(argv[2]);
			uniqc = atoi(argv[3]);
		}
		else 
		{
			printf("Invalid arguments given! Run the program again >:(\n");
			return 0;
		}
	}	
	generate_numbers(min, max, uniqc);
	return 0;
}
