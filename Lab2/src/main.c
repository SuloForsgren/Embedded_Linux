#include <stdio.h>
#include <stdlib.h>
#include "../include/numbers.h"

int main(int argc, char *argv[]) 
{
	if (argc < 2) 
	{
		printf("No arguments given.. Exiting.....\n");
		return 1;
	}
	int count;
	
		
	for (count = 1; count < argc; count++) 
	{
		char *endptr;
		int value = strtol(argv[count], &endptr, 10);

		if (*endptr == '\0') 
		{
			printf("Success: %s (converted to %ld)\n", argv[count], value);
		}
		else 
		{
			printf("Encountered an error: %s\n", argv[count]);
		}
	}
	return 0;
}
