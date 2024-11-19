#include "../include/numbers.h"

//Check for errors, allocate memory dynamically and generate numbers and free the allocated memory
void generate_numbers(int min, int max, int uniqc) 
{
	srand(time(NULL));

	int range = max - min + 1;
	int *numbers = (int *)malloc(uniqc * sizeof(int));

	if (numbers == NULL) 
	{
		printf("Memory allocation failed\n");
		return;
	}
	else if (uniqc > range) 
	{
		printf("Invalid range!\n");
		return;
	}
	
	int count = 0;
	while (count < uniqc) 
	{
		int random_num = rand() % range + min;
		int is_unique = 1;

		for (int i = 0; i < count; i++) 
		{
			if (numbers[i] == random_num) 
			{
				is_unique = 0;
				break;
			}
		}

		if (is_unique) 
		{
			numbers[count] = random_num;
			count++;
			printf("Generated number: %d\n", random_num);
		}
	}
	printf("\n");
	free(numbers);
}

//Ask the arguments (range and unique number count) and validate inputs
int ask_arguments(int *min, int *max, int *uniqc) 
{
	printf("Enter start of range: \n");
	if (scanf("%d", min) != 1) 
	{
		while (getchar() != '\n');
		return 1;
	}

	printf("Enter end of range: \n");
	if (scanf("%d", max) != 1) 
	{
		while (getchar() != '\n');
		return 1;
	}

	printf("Enter unique number count: \n");
	if (scanf("%d", uniqc) != 1) 
	{
		while (getchar() != '\n');
		return 1;
	}

	return 0;
}
