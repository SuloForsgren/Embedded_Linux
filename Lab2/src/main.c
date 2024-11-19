#include <stdio.h>
#include <stdlib.h>
#include "../include/numbers.h"

#define STRTOL_BASE 10

int main(int argc, char *argv[]) 
{
	char *endptr;
	long val;
	
	int min, max, uniqc;

	if (argc < 4)
	{
		while (ask_arguments(&min, &max, &uniqc) != 0) 
		{
			printf("Invalid input or range detected.. Please try again with valid integers and range..\n");
		}	
	}
	else
	{
   				
	}	
	generate_numbers(min, max, uniqc);
	return 0;
}
