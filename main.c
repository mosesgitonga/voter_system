#include "main.h"

int main()
{
	voters_data data;
	int a;
	printf("Enter\n1 to collect data\n2 to search name:\n");
	scanf("%d", &a);
	getchar();
	if (a == 1)
	{
	
		FILE *file_name;
		file_name = fopen("voter data storage.txt", "a");
		if (file_name == NULL)
		{
			fprintf(stderr, "unable to open file");
			exit(EXIT_SUCCESS);
		}
		store_data_in_file(file_name, &data); 
		fclose(file_name);
	}
	else if (a == 2)
	{
		search_voter(&data);
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}
